#include <iostream>
#include <string>
using namespace std;

// calculate handicap steps: https://www.liveabout.com/handicap-index-calculated-1561058
// find course info: slope, par, rating lookup - https://ncrdb.usga.org/

const double MAX_SLOPE = 155;
const double MIN_SLOPE = 55;
const double STD_SLOPE = 113;
const double MAX_PAR = 90; // max par 5 * 18
const double MIN_PAR = 54; // min par 3 * 18

/*
	Purpose: verifiy an input number falls within a range.
	Pre-condition:	max/min slope and par global constants set
	Post-condition:	none
	Input:	input number for verification
	Output:	returns boolean.
*/
bool verifyRange(double dblInput, string strType);

/*
	Purpose: outputs input message and collects user input
	Pre-condition: strMessage and strType are set.  iostream library is loaded
	Post-condition: none
	Input: strMessage - output instructions, dblInput - byref var to house input, strType - type of validation that needs performed
	Output: none
*/

void collectInput(string strMessage, double& dblInput, string strType);

/*
	Purpose: to calculate a golf handicap based on input
	Pre-condition: Array of scores is set and number of scores for calculation is set
	Post-condition: Handicap is known
	Input: dblCalcScores - array of handicaps, intNumSrores - number of scores to perfrom calcuation for.
	Output: returns calculated handicap
*/
double calcHandicap(double dblCalcScores[], int intNumScores);

/*
	Purpose: to sort an array of numbers
	Pre-condition: array of numbers is set and number of integers stored is set
	Post-condition: array is sorted in ascending order
	Input: dblCalcScores - array of integers, pointer to an array
	Output: none
*/
void ptrSort(int intNumRounds, double* dblScoresPointer);

/* Sort example functions from book */
void sort(double a[], int numberUsed);
void swapValues(double& v1, double& v2);
double indexOfSmallest(const double a[], int startIndex, int numberUsed);

int main() {

	// course difficulty ratings... collected from our user
	double dblSlope, dblRating, dblPar;

	// hard coded round variables... could make this dymnamic
	int intNumRounds = 10, intNumRoundsForCalc = 3; // hard coding for now... can use more or less

	// use two pointers for dynamic arrays
	double* dblScores; // point to dynamic array of inputted scores
	double* dblCalcScores; // pint to dynamic array of calculated handicaps

	// magic formula... will not format to_string(CONSTANTS).
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	// welcome to the app
	cout << "*** Golf Handicap Calculator ***" << endl << endl;

	// collect input
	collectInput("Enter slope rating(max: " + to_string(MAX_SLOPE) + ", min: " + to_string(MIN_SLOPE) + "): ", dblSlope, "slope");
	collectInput("Enter course rating(max: " + to_string(MAX_PAR) + ", min: " + to_string(MIN_PAR) + "): ", dblRating, "rating");
	collectInput("Enter par for the course(max: " + to_string(MAX_PAR) + ", min: " + to_string(MIN_PAR) + "): ", dblPar, "par");

	// declare our dynamic arrays
	dblScores = new double[intNumRounds]; // this dynamic array will house inputted scores
	dblCalcScores = new double[intNumRounds]; // this dynamic array will house calculate handicaps for individual scores

	// check if our dynamic arrays could be decalred
	if(dblScores == NULL || dblCalcScores == NULL) {
		cout << "Error: Insufficient memory." << endl;
		exit(1);
	}

	// prompt for number of scores
	cout << endl << "Enter 10 rounds to score: " << endl;

	// collect our input 
	for(int i=0; i < intNumRounds; i++) {
		cout << "Enter Score #" << i+1 << ": ";
		cin >> dblScores[i];

		// calculate individual round handicap: (Score - Course Rating) x 113 / Slope Rating
		dblCalcScores[i] = (dblScores[i] - dblRating) * STD_SLOPE / dblSlope;
	}

	// for 10 rounds we need to use the three lowest scores... sort arrays ascending order
	//sort(dblScores, intNumRounds);
	//sort(dblCalcScores, intNumRounds);
	ptrSort(intNumRounds, dblScores);
	ptrSort(intNumRounds, dblCalcScores);


	cout << endl << "Scores used for calculation: " << endl;
	cout << "Actual Score\t" << "Calculated Handicap" << endl;
	
	// output scores
	for(int i = 0; i < intNumRounds; i++) {
		cout << dblScores[i] << "\t\t" << dblCalcScores[i] << endl;
	}

	cout << endl << "Calculated handicap based on above scores: " << calcHandicap(dblCalcScores, intNumRoundsForCalc);

	return 0;
}

void collectInput(string strMessage, double& dblInput, string strType) {

	do {
		cout << strMessage;
		cin >> dblInput;

	}while(!verifyRange(dblInput, strType));

}

bool verifyRange(double dblInput, string strType) {

	// declare vars to house our min and max
	double dblMax, dblMin; 

	// determine values for min and max
	if(strType == "slope") {
		dblMax = MAX_SLOPE;
		dblMin = MIN_SLOPE;
	}
	else if(strType == "par" || strType == "rating") {
		dblMax = MAX_PAR;
		dblMin = MIN_PAR;
	}
	else {
		cout << "Invalid input!" << endl;
		exit(1);
	}

	// check and see if dblInput is valid or not
	if((dblInput > dblMax) || (dblInput < dblMin)) {
		return false;
	}
	else {
		return true;
	}

}

double calcHandicap(double dblCalcScores[], int intNumScores) {
	// (Sum of differentials / number of differentials) x 0.96
	double dblSumOfDifferentials = 0;

	for(int i = 0; i < intNumScores; i++) {
		dblSumOfDifferentials = dblSumOfDifferentials + dblCalcScores[i];
	}

	// we now have our sum and can return our calculation
	return (dblSumOfDifferentials/intNumScores) * .96;

}

void ptrSort(int intNumRounds, double* dblScoresPointer) {
	double dblTmp; // used to temporarily store a value as we shift it's location

	// use two for loops... one to iterate thru array, second for camparison of each array element on initial iteration
	for(int i=0; i < intNumRounds; i++) {

		// inside loop body we not need to compare our CURRENT value against the rest of the array
		for(int j = i + 1; j < intNumRounds; j++) {
			// use a pointer to get the memory location of an array element... then the dereference operator to
			// get the value stored in that memory location
			if(*(dblScoresPointer + j) < *(dblScoresPointer + i)) {
				dblTmp = *(dblScoresPointer + i);

				*(dblScoresPointer + i ) = *(dblScoresPointer + j); // move inner loops lower value to outer loops current index
				*(dblScoresPointer + j ) = dblTmp;
			}
		}
	}

}

void sort(double a[], int numberUsed)
{
    int indexOfNextSmallest;

    for (int index = 0; index < numberUsed - 1; index++)
    {
    	//Place the correct value in a[index]:
        indexOfNextSmallest = indexOfSmallest(a, index, numberUsed);
        swapValues(a[index], a[indexOfNextSmallest]);
        //a[0] <= a[1] <=...<= a[index] are the smallest of the original array 
        //elements. The rest of the elements are in the remaining positions.
    }
}

void swapValues(double& v1, double& v2)
{
    int temp;
    temp = v1;
    v1 = v2;
    v2 = temp;
}


double indexOfSmallest(const double a[], int startIndex, int numberUsed)
{
    int min = a[startIndex], indexOfMin = startIndex;

    // start checking after the current element, hint the +1
    for (int index = startIndex + 1; index < numberUsed; index++) {
        if (a[index] < min)
        {
            min = a[index];
            indexOfMin = index;
            //min is the smallest of a[startIndex] through a[index]
        }

    }

    return indexOfMin;
}

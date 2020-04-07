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

bool verifyRange(double dblInput, string strType);
void collectInput(string strMessage, double& dblInput, string strType);
double calcHandicap(double dblScores[], int intNumScores);
void ptrSort(int intNumRounds, double* dblScoresPointer);

void sort(double a[], int numberUsed);
void swapValues(double& v1, double& v2);
double indexOfSmallest(const double a[], int startIndex, int numberUsed);

int main() {

	double dblSlope, dblRating, dblPar;
	int intNumRounds = 10, intNumRoundsForCalc = 3; // hard coding for now... can use more or less

	double* dblScores;
	double* dblCalcScores;

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	cout << "*** Golf Handicap Calculator ***" << endl << endl;

	// collect input
	collectInput("Enter slope rating(max: " + to_string(MAX_SLOPE) + ", min: " + to_string(MIN_SLOPE) + "): ", dblSlope, "slope");
	collectInput("Enter course rating(max: " + to_string(MAX_PAR) + ", min: " + to_string(MIN_PAR) + "): ", dblRating, "rating");
	collectInput("Enter par for the course(max: " + to_string(MAX_PAR) + ", min: " + to_string(MIN_PAR) + "): ", dblPar, "par");

	// promt for number of scores
	cout << endl << "Enter 10 rounds to score: " << endl;

	// declare our dynamic arrays


	// collect our input 
	for(int i=0; i < intNumRounds; i++) {

	}

	// for 10 rounds we need to use the three lowest scores... sort arrays ascending order
	sort(dblScores, intNumRounds);
	sort(dblCalcScores, intNumRounds);
	//ptrSort(intNumRounds, dblScores);
	//ptrSort(intNumRounds, dblCalcScores);


	cout << endl << "Scores used for calculation: " << endl;
	cout << "Actual Score\t" << "Calculated Score" << endl;
	// output scores

	cout << endl << "Calculated handicap based on above scores: " << calcHandicap(dblCalcScores, intNumRoundsForCalc);

	return 0;
}

void collectInput(string strMessage, double& dblInput, string strType) {

}

bool verifyRange(double dblInput, string strType) {

}

double calcHandicap(double dblScores[], int intNumScores) {

}

void ptrSort(int intNumRounds, double* dblScoresPointer) {


}

void sort(double a[], int numberUsed)
{
    int indexOfNextSmallest;
    for (int index = 0; index < numberUsed - 1; index++)
    {//Place the correct value in a[index]:
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
    int min = a[startIndex],
        indexOfMin = startIndex;
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

#include <iostream>
// only including functionality from iostream that we are using 
// instead of all library code
using std::cout;
using std::cin;
using std::endl;

typedef int* IntPointer;

int main() {
	int intNumVals = 0;
	// used to point to first element of dynamic array and largest element in array
	IntPointer intArrNums, intMaxNum;

	// prompt for number of elements of our dynamic array
	cout << "Enter how many numbers to store: ";
	cin >> intNumVals;

	// we now know the size of our dynamic array.. intArrNums pointer to access
	// dynamic array
	intArrNums = new int[intNumVals]; // can be dangerous with user input...

	// check if dynamic array was created successfully
	if(intArrNums == NULL) {
		cout << "Error: Insufficient memory." << endl;
		exit(1);
	}

	// collect numbers from user and store in our dynamic array
	cout << "Enter numeric values seperated by a space: ";

	for(int i=0; i < intNumVals; i++) {
		cin >> intArrNums[i];
	}

	// now we can determine the max value housed in our array
	// before comparison... point intMaxNum pointer to the first element
	intMaxNum = &intArrNums[0];

	for(int i=0; i < intNumVals; i++) {
		if(intArrNums[i] > *intMaxNum) {
			intMaxNum = &intArrNums[i];
		}
	}

	// no longer using dynamic array that intArrNums points to... destroy it
	delete intArrNums;

	// at this point we now have a dangling pointer intArrNums... set to null
	intArrNums = NULL;

	// we now know the max stored value
	cout << "Largest value inputted: " << *intMaxNum << endl;

	return 0;
}
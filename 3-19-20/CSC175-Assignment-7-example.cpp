#include <fstream>
#include <string>
#include <iostream>

using namespace std;

// declare your functions up here...
int arraySize(string const array[]);

int main() {
	// read from a file on disk
	ifstream fileInput;
	fileInput.open("CSC175-Assignment-7-part2-input.txt");

	// declare our array
	string strFileInput[500];
	int intNumOfStrings = 0; // used to track how many string are read from file
	int i = 0; // used for iterating thru our array and storing values

	//strFileInput = fileInput; // ? does this work... nope

	while(fileInput >> strFileInput[i]) {
		i++;
	}

	// get the elements
	intNumOfStrings = arraySize(strFileInput);

	cout << "strFileInput: " << endl;

	for(i=0; i < intNumOfStrings; i++) {
		cout << strFileInput[i] << " ";
	}




	return 0;
}


int arraySize(string const array[]) {
	int intArraySize = 0;

	for(int i=0; !array[i].empty(); i++) {
		intArraySize++;
	}

	return intArraySize;
}

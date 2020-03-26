#include <iostream>
#include <cstring>
using namespace std;


// be sure to include argc, argv for console arguements
int main() {
	// course: CSC-175
	char charCourse[8];
	char charNextCharacter, charInvalidInput;

	//cout << "Enter Course Subject-Number(ex: CSC-175): ";

	cout << "Enter X to exit the application:";

	cin.get(charNextCharacter); // expect x

	if(charNextCharacter == 'x') {
		exit(1);
	}
	else {
		cin.putback(charNextCharacter); // character other than x is back in our input stream
		cin.get(charInvalidInput);
		cout << charInvalidInput << " is not a valid choice" << endl;
	}

	// peek example
	/*
	for(int i=0; i <= 7; i++) {
		charNextCharacter = cin.peek();
		cout << "Reading in... '" << charNextCharacter << "'" << endl;
		cin.get(charCourse[i]);
	}*/


	// ignore the course subject and dash
	/*cin.ignore(4);

	for(int i=0; i <= 3; i++) {
		// ignore
		cin.get(charCourse[i]);

	}
	// end marker for cstring
	charCourse[3] = '\0';*/

	cout << "Course Number: " << charCourse;
	

	return 0;
}
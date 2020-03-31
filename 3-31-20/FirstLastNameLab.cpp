#include <iostream>
#include <string>

using namespace std;


int main() {
	// variables
	string strFirstName, strLastName, strNameInput;
	int intDashPos, intLastNameLength;

	cout << "...:: Name Input Formatter ::..." << endl << endl;
	cout << "Enter name (first and last separated by a -): ";

	// get our name inputted from this user
	getline(cin, strNameInput);

	// start manipulating string
	intDashPos = strNameInput.find('-'); // returns integer value of location

	// get first and last name from strNameInput based on our '-' character location
	strFirstName = strNameInput.substr(0, intDashPos);

	intLastNameLength = strNameInput.length() - intDashPos - 1;
	// strLastName = strNameInput.substr(intDashPos+1, strNameInput.length() - intDashPos - 1);
	strLastName = strNameInput.substr(intDashPos+1, intLastNameLength);

	// output our first and last name reversed... ie: Howard, Joel
	cout << "Formatted First/Last Name: " << strLastName << ", " << strFirstName << endl;


	return 0;
}
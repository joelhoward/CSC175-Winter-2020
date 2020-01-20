/*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'/
*
*   ######      ######
*   #######    #######
*   ########  ########
*    ################           
*    #### ###### ####           Class:      CSC-175 - Winter 20
*    ####  ####  ####           Lab:    	2
*   ######  ##  ######          Date:   	01-15-2020
*   ######      ######
*   ######      ######
*
/'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*/
// Problem:	1-10 from the book
// Input:	number of seconds
// Output:	distance traveled

#include <iostream>

using namespace std;

int main()
{
	int intSeconds = 0, intDistance = 0;

	cout << "Enter a time in seconds." << endl;
	cin >> intSeconds;

	intDistance = (32 / 2) * (intSeconds * intSeconds);

	cout << "An object in freefall for " << intSeconds << 
		" seconds will fall " << intDistance <<
		" feet." << endl;


	count << "Hit any key to exit application.";
	char chrInput;
	cin >> chrInput;

	return 0;
}

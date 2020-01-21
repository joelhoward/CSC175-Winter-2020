#include <iostream>

using namespace std;

const int LEGAL_DRINKING_AGE = 21;

// ======================
//     main function
// ======================
int main()
{
	int intAge = 0;

	cout << "Please enter your age: ";
	cin >> intAge;
	cout << endl;

	cout << "You're " << intAge << "... ";

	if(intAge >= LEGAL_DRINKING_AGE)
	{
		cout << "You CAN LEGALLY drink."; 
		cout << endl;
	}
	else
	{
		cout << "You CAN NOT LEGALLY drink.";
		cout << endl;
	}
	


	return 0;

}
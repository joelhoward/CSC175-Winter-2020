#include <iostream>
using namespace std;

// declare our functions
bool isValidInput(int intInput);

/**
	Purpose:	Calculate number of coins based on remaining
				inputted currency value.
	Pre-condition:  0 < intNumCoins < 100
	Post-condition:	intNumCoins is updated with the number
				of coins calculated, intCoinsLeftover is
				updated with remaining coins.
	Input:			(int)& intNumcoins, (int)& intCoinsLeftOver,
					(int) intCoinValue
	Output:			intNumCoins and intCoinsLeftOver in 
					calling function updated=
*/
void computeCoins(int& intNumCoins, int& intCoinsLeftover,
	int intCoinValue);

void outputNumCoins(int intNumCoins, string strSingular,
	string strPlural);

// define our constants
int const QUARTER_VALUE = 25;
int const DIME_VALUE = 10;
int const NICKEL_VLAUE = 5;
int const PENNY_VALUE = 1;

int main() {
	// define our variables
	int intNumCoins = 0, intNumQuarters = 0, intNumDimes = 0,
	intNumNickels = 0, intNumPennies = 0;

	// collect our input from the user
	cout << "Enter number of coins: ";
	cin >> intNumCoins;


	// calculate the number of coins for each

	// output the number of coins


	return 0;
}

void computeCoins(int& intNumCoins, int& intCoinsLeftover,
	int intCoinValue)
	{
		intNumCoins = 3;
		intCoinsLeftOver = 30;
	}
#define NDEBUG
#include <iostream>
#include <cassert>
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

	do {
		// collect our input from the user
		cout << "Enter number of coins: ";
		cin >> intNumCoins;

	}while(isValidInput(intNumCoins));


	// begin output of our result
	cout << intNumCoins << " cents can be given as: " << endl;

	// validate intNumCoins meets pre-condition for computeCoins()
	// debug for development
	assert(0 < intNumCoins && intNumCoins < 100);

	// calculate the number of coins for each
	computeCoins(intNumQuarters, intNumCoins, QUARTER_VALUE);
	computeCoins(intNumDimes, intNumCoins, DIME_VALUE);
	computeCoins(intNumNickels, intNumCoins, NICKEL_VLAUE);
	computeCoins(intNumPennies, intNumCoins, PENNY_VALUE);


	// output the number of coins
	outputNumCoins(intNumQuarters, "quarter", "quarters");
	outputNumCoins(intNumDimes, "dime", "dimes");
	outputNumCoins(intNumNickels, "nickel", "nickels");
	outputNumCoins(intNumPennies, "penny", "pennies");


	return 0;
}

bool isValidInput(int intInput)
{
	//if(0 < intInput && intInput < 100)
	if(intInput < 1 || intInput > 99)
	{
		return true;
	}

	return false;

}

void computeCoins(int& intNumCoins, int& intCoinsLeftover,
	int intCoinValue)
	{
		intNumCoins = intCoinsLeftover / intCoinValue;
		intCoinsLeftover = intCoinsLeftover % intCoinValue;
	}

void outputNumCoins(int intNumCoins, string strSingular,
	string strPlural)
	{
		cout << intNumCoins << " ";

		if(intNumCoins == 1) 
		{
			cout << strSingular;
		}
		else
		{
			cout << strPlural;
		}

		cout << endl;
	}
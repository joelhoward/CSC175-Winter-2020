#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

/*
	Purpose:		Validate user input.
	Pre-condition:
	Post-condition:
	Input:			(int) intGuess - the number the user guessed.	
	Output:			N/A
*/
void validateInputValue(int intGuess);

/*
	Purpose:		Check if guessed number is too high, too low, or correct.
	Pre-condition:
	Post-condition:
	Input:			(int) intGuess - the number the user guessed.	
					(int) intRandNum - the randomly generated number.
	Output:			(str) If the guess was too high, too low, or correct
*/
string checkGuessedNumber(int intGuess, int intRandNum);

/*
	Purpose:		Output the number of guesses it took to find random number
	Pre-condition:
	Post-condition:
	Input:			(int) intNumGuesses - the number of guesses it took to 
							find the random number	
	Output:			N/A
*/
void outputResult(int intNumGuesses);

/*
	Purpose:		Output the title of our application.
	Pre-condition:
	Post-condition:
	Input:			N/A	
	Output:			N/A
*/
void printAppTitle();

int const MAX_RANGE = 10;
int const MIN_RANGE = 1;

int main() {
	// declare our local variables
	int intRand, intNumGuesses, intGuess;

	// output the application title
	printAppTitle();

	// assign our random number - talk about max range with random
	srand(time(0));
	intRand = rand() % MAX_RANGE + 1;

	do {
		// get user's guess
		cout << "Enter a guess between " << MIN_RANGE << " and " << MAX_RANGE << ": ";
		cin >> intGuess;

		// check for valid range
		validateInputValue(intGuess);

		// increment our number of guesses
		intNumGuesses++;

		// output if the guess was within our range
		cout << checkGuessedNumber(intGuess, intRand) << endl;


	
	} while( intRand != intGuess)


	return 0;
}

void printAppTitle()
{
	cout << "Guess the number game!!!\n\n";
}

void validateInputValue(int intGuess)
{
	if(intGuess > MAX_RANGE || intGuess < MIN_RANGE)
	{
		cout << "Invalid input!  Read the directions next time.";
		exit(0);
	}
}

string checkGuessedNumber(int intGuess, int intRandNum)
{
	string strReturn = "";

	if(intGuess < intRandNum)
		strReturn = "Too low!\n\n";
	else if(intGuess > intRandNum)
		strReturn = "Too high!\n\n";

	return strReturn;
}



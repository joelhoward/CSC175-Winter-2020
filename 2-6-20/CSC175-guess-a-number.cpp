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
	Output:			(str) If the guess was too high, too low, or correct
*/
string checkGuessedNumber(int intGuess);

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

void main() {
	// declare our local variables
	int intRand, intNumGuesses, intGuess;

	// output the application title
	printAppTitle();

	// assign our random number - talk about max range with random
	srand(time(0));
	intRand = rand() % MAX_RANGE + 1;

	do {

	} while( intRand != intGuess)


}

void printAppTitle()
{
	cout << "Guess the number game!!!\n\n";
}

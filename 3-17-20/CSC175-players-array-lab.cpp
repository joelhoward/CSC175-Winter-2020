#include <iostream>
#include <string>
using namespace std;

// function declarations
void addPlayer(int &intNumPlayers, string strArrNames[], int intArrScores[]);
void removePlayer(int &intNumPlayers, string strArrNames[], int intArrScores[]);
void printAllPlayers(int intNumPlayers, const string strArrNames[], const int intArrScores[]);
void searchPlayer(int intNumPlayers, const string strArrNames[], const int intArrScores[]);


int main() {
	// our variables for the application
	char chrOption;				// used to house our menu option entry
	int intNumPlayers = 0;		// track the number of players entered
	string strArrNames[20];		// used to house our player names
	int intArrScores[20];		// used to house our player scores

	do {
		// output our menu
		cout << "Enter an option:" << endl;
		cout << "a. Add new player and score." << endl;
		cout << "b. Print all players and scores." << endl;
		cout << "c. Search for a player." << endl;
		cout << "d. Remove a player." << endl;
		cout << "x. Exit the program." << endl;

		// grab our user's input
		cin >> chrOption;
		cout << endl;
		cout << chrOption;

		// call relevant function based on user input
		if(chrOption == 'a') {
			// call addPlayer function
			addPlayer(intNumPlayers, strArrNames, intArrScores);
		}
		else if(chrOption == 'b') {
			// call our printAllPlayers function
			printAllPlayers(intNumPlayers, strArrNames, intArrScores);
		}
		else if(chrOption == 'c') {
			// call searchPlayer
			searchPlayer(intNumPlayers, strArrNames, intArrScores);
		}
		else if(chrOption == 'd') {
			// call removePlayer
			removePlayer(intNumPlayers, strArrNames, intArrScores);
		}
		else if(chrOption != 'x') {
			cout << "Please enter a valid menu choice." << endl << endl;
		}

	} while(chrOption != 'x');


	return 0;
}

// function definitions
void addPlayer(int &intNumPlayers, string strArrNames[], int intArrScores[]) {
	// prompt for player
	cout << "Enter a new player name: ";
	cin >> strArrNames[intNumPlayers];

	// prompt for player score
	cout << endl << "Enter a new player score: ";
	cin >> intArrScores[intNumPlayers];

	// update our players counter
	intNumPlayers++;

}

void printAllPlayers(int intNumPlayers, const string strArrNames[], const int intArrScores[]) {
	cout << "Player Scores" << endl;

	// display all players
	for(int i = 0; i < intNumPlayers; i++) {
		cout << strArrNames[i] << "\t\t" << intArrScores[i] << endl;
	}

	cout << endl;
}

void searchPlayer(int intNumPlayers, const string strArrNames[], const int intArrScores[]) {
	string strSearchTarget;
	int intFoundIndex = -1;

	cout << "Please enter the player name you would like to search for: ";
	cin >> strSearchTarget;
	cout << endl;

	// search the array for our player
	for(int i=0; i < intNumPlayers; i++) {
		// check if the current element == strSearchTarget
		if(strArrNames[i] == strSearchTarget) {
			// success
			intFoundIndex = i;
		}
	}

	// check if player was found and output correct message
	if(intFoundIndex >= 0) {
		// found player
		cout << "The score for '" << strSearchTarget << "' is " << intArrScores[intFoundIndex] << "." << endl;
	}
	else {
		// could not find the player
		cout << "The player '" << strSearchTarget << "' was not found." << endl;
	}

	cout << endl;
}

void removePlayer(int &intNumPlayers, string strArrNames[], int intArrScores[]) {
	string strSearchTarget;
	int intFoundIndex = -1;

	cout << "Please enter the player name you would like to remove: ";
	cin >> strSearchTarget;
	cout << endl;

	// search for the player to remove
	for(int i=0; i < intNumPlayers; i++) {
		// search for the player to remove
		if(strArrNames[i] == strSearchTarget) {
			// update our found index
			intFoundIndex = i;
		}
	}

	// check if we found the player to remove
	if(intFoundIndex >= 0) {
		// found player to remove
		// check to see if the player to be removed is the last element
		if(intNumPlayers -1 != intFoundIndex) {
			// then we need to shuffle elements... if it is the last element we just overwrite
			// -- move the last elements of each array into the found element's location
			strArrNames[intFoundIndex] = strArrNames[intNumPlayers - 1];
			intArrScores[intFoundIndex] = intArrScores[intNumPlayers -1];
		}

		// update our number players 
		intNumPlayers--;

		// output we removed the player
		cout << "The player '" << strSearchTarget << "' was removed." << endl;
	}
	else {
		// we did not find the player to remove
		cout << "The player '" << strSearchTarget << "' was not found." << endl;
	}

	cout << endl;
}


#include <iostream>
#include <string>
using namespace std;

void outputName(string  strName);

void outputAllNames(const string strAllNames[], int intArrSize);

int main() {

	int const NUM_OF_NAMES = 3;
	string strNames[NUM_OF_NAMES] = {"Joel", "Kyle", "Nick"};

	// output Joel
	outputName(strNames[0]);

	// output Kyle
	outputName(strNames[1]);

	// output Nick
	outputName(strNames[2]);

	cout << endl << endl;

	for(int i =0; i < NUM_OF_NAMES; i++)
	{
		outputName(strNames[i]);
	}

	// output all names
	cout << endl << endl;
	outputAllNames(strNames, NUM_OF_NAMES);

	outputAllNames(strNames, NUM_OF_NAMES);

	return 0;
}

void outputName(string strName)
{
	cout << strName << endl;
}

void outputAllNames(const string strAllNames[], int intArrSize)
{
	for(int i = 0; i < intArrSize; i++)
	{
		cout << strAllNames[i] << endl;
		//strAllNames[i] = "Joel";
	}
}

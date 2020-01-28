#include <iostream>
using namespace std;

int main()
{
	int intMaxPoints = 0, intEarnedPoints = 0;
	double dblPercentage = 0;
	char chrLetterGrade;

    cout << "-- Letter Grade Calculator -- " << endl << endl;
    cout << "Enter max points for assignment: ";
    cin >> intMaxPoints;
    cout << "Enter points received on assignment: ";
    cin >> intEarnedPoints;

    dblPercentage = ((double) intEarnedPoints / (double) intMaxPoints) * 100;

    if(dblPercentage >= 90)
    	chrLetterGrade = 'A';
    else if(dblPercentage >= 80)
    	chrLetterGrade = 'B';
    else if(dblPercentage >= 70)
    	chrLetterGrade = 'C';
    else if(dblPercentage >= 60)
    	chrLetterGrade = 'D';
    else
    	chrLetterGrade = 'E';

    cout << "With " << intEarnedPoints << " points out of " << intMaxPoints <<
    " you received a " << dblPercentage << "%.  Which is an :" << chrLetterGrade << endl;


	return 0;
}
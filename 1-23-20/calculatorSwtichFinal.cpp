// Purpose:	Based on a user inputted operator, perform an operation on two user inputted numbers
// Input:		operator(char), number 1(int), number 2(int)
// Output:		Result of the operation
#include <iostream>
using namespace std;

int main()
{
	char chrOperator;
	int intNum1 = 0, intNum2 = 0;
	double dblResult = 0;

	cout << "Enter an operator (+, - *, /): ";
	cin >> chrOperator;
	
	cout << "Enter first operand (whole number): ";
	cin >> intNum1;

	cout << "Enter second operand (whole number): ";
	cin >> intNum2;

	//cout << intNum1 << " " << chrOperator << " " << intNum2 << " = ";

	switch (chrOperator)
	{
		case '+':
			//cout << intNum1 + intNum2;
			dblResult = intNum1 + intNum2;
			break;
		case '-':
			//cout << intNum1 - intNum2;
			dblResult = intNum1 - intNum2;
			break;
		case '*':
			//cout << intNum1 * intNum2;
			dblResult = intNum1 * intNum2;
			break;
		case '/':
			//cout << (double) intNum1 / (double) intNum2;
			dblResult = (double) intNum1 / (double) intNum2;
			break;
		default:
			cout << chrOperator << " is not a supported operation!!!!";
			return 0;
	}

	cout << intNum1 << " " << chrOperator << " " << intNum2 << 
		" = " << dblResult << endl;

	//cout << endl;



	return 0;
}

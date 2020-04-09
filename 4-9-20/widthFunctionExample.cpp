#include <iostream>
using namespace std;


int main() {
	string strOuput = "123";

	//ofstream outStream("width-output.txt");

	cout.width(10);
	cout << strOuput << endl;

	cout.width(12);
	cout << strOuput;


	return 0;

}
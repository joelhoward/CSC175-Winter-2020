#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main() {
	int i;

	srand(time(0));
	cout << "10 Random Numbers: 1-1000" << endl;
	for(i = 0; i < 10; i++)
		cout << (rand() % 1000) + 1 << endl;

	cout << "10 Random Numbers: 0-10" << endl;
	for(i = 0; i < 10; i++)
		cout << (rand() % 11) << endl;

	srand(1);
	cout << endl << "Another  10 \"Random\" Numbers" << endl;
	for(i = 0; i < 10; i++)
		cout << rand() << endl;

	return 0;
}
#include <iostream>
#include <array>
using namespace std;

int main() {

	int arrNums[] = {20, 30, 40, 50};

	// do not need to know...
	array<int,4> arrClsNums = {20, 30, 40, 50};

	// range based loop
	for (int x : arrNums) {
		cout << x << " " << endl;
	}
	cout << endl << endl;

	// counting loop
	for(int i=0; i < 4; i++) {
		cout << arrNums[i] << endl;
	}

	cout << endl << endl;

	// using size function from array library
	for(int i=0; i < arrClsNums.size(); i++) {
		cout << arrNums[i] << endl;
	}

	cout << endl << endl;


	// unpredictable results - going outside bounds or array
	for(int i=0; i < 15; i++) {
		cout << arrNums[i] << endl;
	}

	return 0;
}

#include <iostream>
using namespace std;

int main() {
	
	// outter loop to control rows... 5 rows
	// 
	for(int i=0; i < 5; i++) {
		// i = 0 first iteration
		// i = 1
		// i = 2

		// handle hash tag output
		// j = 0... is j <= 0
		// j = 0  j <= 1
		// j = 0  j <= 2
		for(int j=0; j <= i; j++) {
			cout << "#";
		}
		
		cout << endl;

	}

	return 0;
}
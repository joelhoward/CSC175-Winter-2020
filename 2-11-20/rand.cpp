#include <iostream>
#include <cstdlib>

using namespace std;

int main(void) {

	// regular rand - 0-RAND_MAX(32767 - max two-byte integer) INCLUSIVE
	int i;
    for (i = 0; i < 10; i++)
        cout << rand( ) << endl;

    cout << "\nRange 0-10:\n";

	// rand range 0-10
    for (i = 0; i < 10; i++)
	    cout << (rand( ) % 11) << endl;

    cout << "\nRange 1-10:\n";
	// rand range 1-10
    for (i = 0; i < 10; i++)
	    cout << (rand( ) % 9 +1) << endl;
}

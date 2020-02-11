#include <iostream>
#include <cstdlib>

using namespace std;

int main(void) {
  	int i;

  	srand(1);
  	cout << "\n Another 10 random numbers: \n";
    for (i = 0; i < 10; i++)
        cout << rand( ) << endl;

    srand(1);
    cout << "\n Another 10 random numbers: \n";
    for (i = 0; i < 10; i++)
        cout << rand( ) << endl;


}

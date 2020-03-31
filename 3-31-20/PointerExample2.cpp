#include <iostream>
using namespace std;

int main() {
	int *p1, *p2, v1, v2;
	v1 = 8; 	// variable
	v2 = 9; 	// variable

	p1 = &v1; 	// pointer p1 referencing v1
	p2 = &v2; 	// pointer p2 referencing v2

	// using deference operator(*) to get the data housed in the variables that p1 and p2
	// point to
	cout << "p1 points to:\t" << p1 << endl;
	cout << "p2 points to:\t" << p2 << endl;
	cout << "p1:\t" << *p1 << endl;
	cout << "p2:\t" << *p2 << endl;
	cout << "v1:\t" << v1 << endl;
	cout << "v2:\t" << v2 << endl;


	// pointer assignment... p1 will now point to the variable that p2 currently points to
	p1 = p2; // p1 now equals p2
	cout << "After p1 = p2 assignment:" << endl;
	
	cout << "p1 points to:\t" << p1 << endl;
	cout << "p2 points to:\t" << p2 << endl;
	cout << "p1:\t" << *p1 << endl;
	cout << "p2:\t" << *p2 << endl;
	cout << "v1:\t" << v1 << endl;
	cout << "v2:\t" << v2 << endl;


	// pointer deference to update the data stored in the variable that p1 points to(v2)
	*p1 = 21;
	cout << "After *p1 = 21 assignment:" << endl;

	cout << "p1 points to:\t" << p1 << endl;
	cout << "p2 points to:\t" << p2 << endl;
	cout << "p1:\t" << *p1 << endl;
	cout << "p2:\t" << *p2 << endl;
	cout << "v1:\t" << v1 << endl;
	cout << "v2:\t" << v2 << endl;

	return 0;

}

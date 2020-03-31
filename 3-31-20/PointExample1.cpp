#include <iostream>
using namespace std;

int main() {
	int *p1, *p2, v1, v2;
	p1 = &v1;
	p2 = &v2;
	v1 = 2;
	v2 = 3;


	cout << "v1: " << endl;
	cout << v1 << endl;
	cout << p1 << endl;
	cout << *p1 << endl;


	cout << "v2: " << endl;
	cout << v2 << endl;
	cout << p2 << endl;
	cout << *p2 << endl;

	return 0;

}

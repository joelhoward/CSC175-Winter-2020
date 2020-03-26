#include <iostream>
using namespace std;


// be sure to include argc, argv for console arguements
int main() {
	// course: CSC-175
	char charCourse[8];

	cout << "Enter Course Subject-Number(ex: CSC-175): ";

	// get line 
	cin.getline(charCourse, 50);

	// output our received input
	cout << endl << "Course: " << charCourse << endl;

	return 0;
}
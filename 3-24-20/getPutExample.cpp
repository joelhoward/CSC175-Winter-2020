#include <iostream>
using namespace std;


// be sure to include argc, argv for console arguements
int main() {
	// course: CSC-175
	char charCourse[8];
	int intCounter = 0;

	cout << "Enter Course Subject-Number(ex: CSC-175): ";

	while(intCounter < 8) {
		cin.get(charCourse[intCounter]);
		intCounter++;
	}

	charCourse[intCounter] = '\0';



	// get character 
	//cin.get(charNextSymbol);

	// output our received input via overloaded cout
	cout << endl << "Course via cout: " << charCourse << endl;

	// output using put method
	cout << "Course via put method: ";
	for(int i=0; i <= 7; i++) {
		// will "output" end marker when set to 7... nothing.
		cout.put(charCourse[i]);
	}

	return 0;
}
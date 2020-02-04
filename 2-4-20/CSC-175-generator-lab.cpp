/*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'/
*
*	Name:		Joel Howard
*	Class:		CSC-175
*	Project: Assignment #Template
*	Due Date:	Lab
*
/'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(void)
{
	// variables declared
	string strDocBlock = "", strHeader = "", strBody = "";
	char chrInputOption;

	// output welcome message
	cout << "Welcome to the C++ template file generator!" << endl << endl;

	do {
		 // menu prompt
        cout << "Please pick an option:\n\n"
             << "1 - Add a documentation block.\n"
             << "2 - Include a Library.\n"
             << "3 - Add a main function.\n"
             << "4 - Write our file to disk\n"
             << "0 - Exit Application\n\n"
             << "Option: ";

        cin >> chrInputOption;
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n";

        switch(chrInputOption) {
        	case '1': {
        		// generate a doc block

               // user inputted variables to generate doc block
                string strFirstName = "", strLastName = "", strAssignmentNum = "", strDueDate = "", strClass = "";

                cout << "\nEnter your first name: ";
                cin >> strFirstName;

                cout << "\nEnter your last name: ";
                cin >> strLastName;

                cout << "\nEnter your class: ";
                cin >> strClass;

                cout << "\nEnter your asignment number: ";
                cin >> strAssignmentNum;

                cout << "\nEnter the due date: ";
                cin >> strDueDate;

                strDocBlock = "";

                strDocBlock =
                        "/*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'/"
                        "\n*"
                        "\n*\tName:\t\t" + strFirstName + " " + strLastName +
                        "\n*\tClass:\t\t" + strClass +
                        "\n*\tProject: Assignment #\t" + strAssignmentNum +
                        "\n*\tDue Date:\t" + strDueDate +
                        "\n*"
                        "\n/'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*/\n\n";

                cout << "***Documentation block added!***\n\n";

        		break;
        	}
        	case '2': {
        		// include our libraries in our header

        		break;
        	}
        	case '3': {
        		// add a main function

        		break;
        	}
        	case '4': {
        		// wrte our file to disk

        		break;
        	}
        	default: {
        		if(chrInputOption != '0') {
	        		cout << chrInputOption << 
	        		" is not a supported option!!!" << endl;
        		}
        	}
        }

	}
	while(chrInputOption != '0');






	return 0;
}
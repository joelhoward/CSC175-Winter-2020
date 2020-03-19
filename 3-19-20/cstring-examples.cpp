#include <iostream>
#include <cstring>
using namespace std;

int main() {
        char charFirstName[20] = "Joel";
        char charLastName[20] = "Howard";

        // what actually happens with strcmp...
        // charFirstName[0] = J = decimal value 74
        // charLastName[0] = H = decimal value 72
        // does 74 == 72
        // return 2 - this is returned because 74 is 2 greater than 72
        // with booleans, anything greater than 0 is true
        //      anything 0 or less... is false

        /*if(strcmp(charFirstName, charLastName)) {
            // we would think if they are equal... it would be true
            cout << charFirstName << " equals " << charLastName;
        }
        else {
            cout << charFirstName << " does not " << charLastName;
        }*/

        // equality comparison with expected "true" result for two cstring not equaling each other
        // return of 0 is equal
        /*if(strcmp(charFirstName, charLastName) == 0) {
            // we would think if they are equal... it would be true
            cout << charFirstName << " equals " << charLastName;
        }
        else {
            cout << charFirstName << " does not equal " << charLastName;
        }
        cout << endl << endl;

        // equality comparison with expect "false" result for two cstring not equaling each other
        cout << strcmp(charFirstName, charLastName) << endl;
        if(strcmp(charFirstName, charLastName) != 0) {
            // we would think if they are equal... it would be true
            cout << charFirstName << " does not equal " << charLastName;
        }
        else {
            cout << charFirstName << " equals " << charLastName;
        }*/

        // cstring concatination
        char charFullName[40] = "Joel";
        cout << "before concatination: " << charFullName << endl;

        strcat(charFullName, " Howard");
        cout << "after concatination: " << charFullName << endl;



        return 0;

}

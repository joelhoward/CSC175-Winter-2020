#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
        // check if parameters were passed
        // argc contains how many parameters were passed
        // name of program counts... so atlest 1
        if (argc < 2) {
                // Tell the user how to run the program.. ie they did not pass
                // their name
                cout << "Program usage: " << argv[0] << " Your-name" << endl;

                return 1;
        }
        // Print the user's name:
        cout << argv[0] << "says hello, " << argv[1] << "!" << std::endl;
        return 0;
}

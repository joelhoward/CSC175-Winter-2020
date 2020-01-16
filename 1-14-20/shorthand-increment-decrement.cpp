#include <iostream>
using namespace std;

int main( )
{
    int intVarIncrement = 1;

    int intVarDecrement = 10;

    // expected output:   Post Increment: 1
    //                    Value after Post Increment:  2
    cout << "Initial Value:\t" << intVarIncrement << endl;
    cout << "Post Increment:\t" << intVarIncrement++ << endl;
    cout << "Value after Post Increment:\t" << intVarIncrement << endl << endl;

    // expected output:   Pre Increment: 1
    //                    Value after Pre Increment:  1
    cout << "Initial Value:\t" << intVarIncrement << endl;
    cout << "Pre Increment:\t" << ++intVarIncrement << endl;
    cout << "Value after Pre Increment:\t" << intVarIncrement << endl;

    return 0;
}

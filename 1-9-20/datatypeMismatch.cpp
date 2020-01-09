#include <iostream>
using namespace std;

int main( )
{
    // type mismatch int != char/string
    //int intVar = "Hello world";

    char charVar = "A";

    int intVar = 2.99;

    cout << "Expected value for intVar: 2.99\n";
    cout << intVar;

    return 0;
}

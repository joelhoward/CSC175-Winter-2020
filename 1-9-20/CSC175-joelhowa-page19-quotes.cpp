#include <iostream>
using namespace std;

int main( )
{
    // init a variable with a string datatype
    //string strOutput = "\t\\t\n";
    // our expected output:  "    \t
    // (NEWLINE)            "

    //string strOutput = "\\t\\\\t\\n";
    // our expected output: "\t\\t\n";

    // if we wanted to output Joel "Professor" Howard
    // string strOutput = "Joel ""Professor"" Howard"; // multiple literals combined into one
    //string strOutput = "Joel \"Professor\" Howard";
    //\"";

    // double vs single quote with string
   // string strOutput = 'Joel "Professor" Howard';
    int intOutput = '2';


    // raw string literal
    // string strOutput = R"(\t\\t\n)";
    // our expected output:
    // stopped at slide 17


    // output our strOutput to the console(screen);
    //cout << strOutput;
    cout << intOutput;

    return 0;
}

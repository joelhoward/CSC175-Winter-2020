#include <iostream>
using namespace std;

int main() {
    string strRawLiteralString = R“(\t\\t\n)”;
    string strLiteralEscape = "\t\\t\n";

    // expected output:
    // strRawLiteralString value:  \t\\t\n
    // strLiteralEscape value:      \t
    //
    cout << "strRawLiteralString value:\t" << strRawLiteralString << '\n';
    cout << "strLiteralEscape value:\t" << strLiteralEscape;

    return 0;

}

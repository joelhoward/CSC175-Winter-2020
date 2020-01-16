#include <iostream>
using namespace std;

int main() {
    string strRawLiteralString = R"(\t\\t\n)";
    string strLiteralEscape = "\t\\t\n";

    // expected output: break; return; if(13==4)
    // strRawLiteralString value:  \t\\t\n
    // strLiteralEscape value:      \t
    // (new line)
    cout << "strRawLiteralString value:\t" << strRawLiteralString << '\n';
    cout << "strLiteralEscape value:\t" << strLiteralEscape;

    return 0;

}

#include <iostream>
using namespace std;

int main()
{

    int intCount = 0;

    while(intCount >= 0) // condition always met!
    {
        if (intCount == 6)
        {
            //intCount++; un-comment to bring out of infinite loop
            continue;

        }

        cout << "Hello world!  Our counter is currently: " << intCount << endl;
        intCount++;

        if ( intCount == 12)
        {
            break;
        }
    }

    return 0;

}

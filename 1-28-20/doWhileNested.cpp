#include <iostream>
using namespace std;

int main()
{

    int intOuterCount = 0;

    do
    {
        int intInnerCount = 0;
        do
        {
            cout << "Outer Count Value:\t" << intOuterCount << "\tInner Count Value:\t" << intInnerCount << endl;
            intInnerCount++;

        } while (intInnerCount < 3);

	cout << endl << "Back in our Outer Loop" << endl;

        intOuterCount++;

    } while(intOuterCount < 3);


    return 0;

}

#include <iostream>
using namespace std;

int main()
{

    for (int intBeerCount = 100; intBeerCount >= 0; intBeerCount--)
    {
        cout << intBeerCount << " bottles of beer on the wall...\n";

        if( intBeerCount > 0)
        {
            cout << "Take one down and pass it around!\n";
        }
        else
        {
            cout << "No more beer to take down! We had too many! :*)";
        }

    }

    return 0;

}

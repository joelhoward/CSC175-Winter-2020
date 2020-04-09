#include <iostream>
#include <iomanip>
using namespace std;

int main( )
{
        cout << "Start" << setw(4) << 10
         << setw(4) << 20 << setw(6) << 30 << endl;

         cout.setf(ios::fixed | ios::showpoint);
         cout 	<< "$" << setprecision(2) << 10.3 << "  "
         << "$" << setprecision(4) << 20.5 << endl;



        return 0;
}

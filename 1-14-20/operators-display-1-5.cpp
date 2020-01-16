#include <iostream>
using namespace std;

int main( )
{
    const double RATE = 6.9; // as a percent 0.069
    // dbl_case not for this class
    // pascal case: DblCase - not for this class
    // camel case - use for this class: dblCase
    double dblDeposit; // used to house our inputed deposit amount

    cout << "Enter the amount of your deposit $";
    cin >> dblDeposit;

    //RATE = 500; - does not work. cannot modify constant value

    // double dblNewBalance;
    // dblNewBalance = dblDeposit + dblDeposit*(RATE/100);
    double dblNewBalance = dblDeposit + dblDeposit*(RATE/100);
    cout << "In one year, that deposit will grow to\n"
         << "$" << dblNewBalance << " an amount worth waiting for.\n";

    return 0;
}

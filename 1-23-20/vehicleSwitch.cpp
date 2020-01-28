#include <iostream>
using namespace std;

int main()
{
    int intVehicleClass;
    double dblToll = -1;

    cout << "Enter vehicle class: ";
    cin >> intVehicleClass;

    cout << "Vehicle type:\t";

    switch (intVehicleClass)
    {
        case 1:
            cout << "Passenger car.";
            dblToll = 0.50;
            break;        //If you forget this break, then passenger cars will pay $1.50.

        case 2:
            cout << "Bus.";
            dblToll = 1.50;
            break;

        case 3:
            cout << "Truck.";
            dblToll = 2.00;
            break;

        default:
        cout << "Unknown!";
    }

    if ( dblToll != -1)
        cout << endl << "Vehicle toll:\t" << dblToll << endl;

    return 0;
}

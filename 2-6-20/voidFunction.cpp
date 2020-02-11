#include <iostream>
#include <cstdlib>

using namespace std;
void showResults(double fDegrees, double cDegrees);

int main(void) {

  showResults(32.5, 0.3);

  return 0;

}

void showResults(double fDegrees, double cDegrees)
{
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    cout << fDegrees
         << " degrees Fahrenheit is equivalent to\n"
         << cDegrees << " degrees Celsius.\n";
}

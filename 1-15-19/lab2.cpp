/*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'/
*
*   ######      ######
*   #######    #######
*   ########  ########
*    ################           
*    #### ###### ####           Class:      CSC-175 - Winter 20
*    ####  ####  ####           Lab:      2
*   ######  ##  ######          Date:     01-15-2020
*   ######      ######
*   ######      ######
*
/'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*'*/
// Problem: 1-3 from the book
// Input:   old salary
// Output:  new annual and monthly salary, retroactive pay due

#include <iostream>
using namespace std;
const double INCREASE = 0.076;

int main()
{
  double dblOldSalary, dblNewSalary, dblNewMonthlySalary, dblRetroactivePay;
  char ans;
  cout << "Enter current annual salary." << endl
       << "I'll return new annual salary, monthly ”
       << “salary, and retroactive pay." << endl; 
  cin >> dblOldSalary;

  dblNewSalary = dblOldSalary * ( 1 + INCREASE );
  dblNewMonthlySalary = dblNewSalary / 12;
  dblRetroactivePay = (dblNewSalary – dblOldSalary) / 2;

  cout << "new annual salary " << dblNewSalary << endl;
  cout << "new monthly salary " << dblNewMonthlySalary << endl;
  cout << "retroactive salary due: " 
       << dblRetroactivePay << endl;
  return 0;
}

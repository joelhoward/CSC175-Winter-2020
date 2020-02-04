#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main( )
{
  	string strLine;
  	int intRank = 1;
  	ifstream inputStream;

 	inputStream.open("characters.txt");

 	// check if our file opened correctly
 	 if(!inputStream.is_open()) {
      cerr << "Could not open file!";
      return 0;
   }

   // grab our output
   while(getline(inputStream, strLine)) {
   	cout << "The number " << intRank << " chracter is: " << strLine << endl;

   	intRank++;
   }

	inputStream.close();

	return 0;
}

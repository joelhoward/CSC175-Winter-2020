#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main( )
{
	string strCharacter;
  	fstream inputStream;

 	inputStream.open("characters.txt");

 	getline(inputStream, strCharacter);

 	cout << "The best video game character is: " << strCharacter << endl;

 	inputStream.close();

     return 0;
}

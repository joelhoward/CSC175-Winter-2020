#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main( )
{
  	string text;
  	fstream inputStream;


 	inputStream.open("player.txt");

 	while (inputStream >> text) // our files stream extraction operator returns true until no data is left, ie: until it cannot read input
 	{
 		cout << text << endl;
 	}
	inputStream.close();

	return 0;
}

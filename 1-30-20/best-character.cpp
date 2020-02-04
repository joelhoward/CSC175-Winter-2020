#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main( )
{
	string strCharacter;
	int intCharacterRank = 1;

  	fstream inputStream;

 	inputStream.open("characters.txt");

 	if(inputStream.is_open() == false)
 	{
 		cerr << "Could not open file!";
 		return 0;  
 	}

 	// single player name no spaces
 	// inputStream >> strCharacter;
 	// whole line accounting for spaces
 	//getline(inputStream, strCharacter);

 	// handle multiple top characters - loop
 	while(getline(inputStream, strCharacter)) {
 		//cout << "The best video game character is: " << strCharacter << endl;
 		cout << "The #" << intCharacterRank << 
 		" best video game character is: " << 
 		strCharacter << endl;
 		intCharacterRank++;
 	}

 	// for single character
 	//cout << "The best video game character is: " << strCharacter << endl;

 	inputStream.close();

     return 0;
}

/*
The rules for pig latin are as follows:
a.	For words that begin with consonants, move the leading consonant to
 the end of the word and add "ay." Thus, "ball" becomes "allbay"; "button"
becomes "uttonbay"; and so forth.
b.	For words that begin with vowels, add "way" to the end.
Thus, “all” becomes “allway”;  “one” becomes “oneway”; and so forth.
*/
#include <iostream>
#include <string>

using namespace std;

/*
    Purpose:            Convert a string to pig latin and output to screen
    Pre-condition:      We need to include the string library in our app,
                        and strInput needs to contain data.
    Post-condition:     We will now have a string converted to pig latin.
    Input:              (string) strInput - contains strings to be converted
                            to pig latin.
    Output:             To console, string that was converted to pig latin.
*/
void outputPigLatin(string strInput);

/*
    Purpose:            Check if a character is a vowel
    Pre-condition:      We need to include the string library in our app,
                        and charInput needs to be passed.
    Post-condition:     We will now know if the character is a vowel
    Input:              (char) charInput - character to check if vowel
    Output:             boolean 
*/
bool isVowel(char charInput);

int main() {
	string strInput;

	do {
		// output our instructions/what the program does
		cout << "Enter text to convert, blank exits application.  The program will convert the text to Pig Latin." << endl;
		
		// we use getline to read input since it also reads in spaces
		getline(cin, strInput);

		// call our conversion function
		outputPigLatin(strInput);

	} while(strInput.length() > 0); // as long as something was entered... not just a return.



    return 0;
}



// output example:
// -- input: 		Hello class.  I hope your online classes are going well.
// -- output:		elloHay lass.cay class. way Iway opehay ouryay onlineway lassescay areway oinggay ell.way
// -- extra credit:	fix punctuation... add if words have 2 consonants at the beginning have both move to end
void outputPigLatin(string strInput) {
	// declare our variables
	bool boolIsFirstLetter = true;
	bool boolIsVowel = true;
	int intWordEnd = -1;
	int intWordStart = -1;
	char charPunctuation;
	char charCurrent; 

	strInput = strInput + " ";

	// loop thru each character in our inputted string var
	for(int i=0; i < strInput.length(); i++) {

		charCurrent = strInput[i];

		// check if character is a space or not
		if(isspace(charCurrent)) {

			if(intWordStart >= 0) {
				// check for punctuation...
				if(ispunct(strInput[i-1])) {
					intWordEnd = i -1;
					charPunctuation = strInput[i-1];
				}
				else {
					intWordEnd = i;
					charPunctuation = '\0';
				}

				// check for capital letter
				if(isupper(strInput[intWordStart]) && !boolIsVowel) {
					strInput[intWordStart] = tolower(strInput[intWordStart]);
					strInput[intWordStart +1] = toupper(strInput[intWordStart + 1]);
				}



				if(boolIsVowel) {
					// vowel - add "way" to the end
					cout << strInput.substr(intWordStart, intWordEnd-intWordStart) << "way" << charPunctuation << " ";
				}
				else {
					// consonant - move the leading consonant to the end of the word and add "ay"
					if(!isVowel(strInput[intWordStart+1])) {
					cout << strInput.substr(intWordStart+2, (intWordEnd - intWordStart - 2)) 
					<< strInput.substr(intWordStart, 2) << "ay" << charPunctuation << " ";
					}
					else {
						cout << strInput.substr(intWordStart+1, (intWordEnd - intWordStart - 1)) 
					<< strInput.substr(intWordStart, 1) << "ay" << charPunctuation << " ";
					}

					

				}
			}
			

			// reset boolean flags
			boolIsVowel = true;
			boolIsFirstLetter = true;
		}
		else if(boolIsFirstLetter) {
			// current character is an actual alpha
			boolIsFirstLetter = false;

			// check if the current character is a vowel
			boolIsVowel = isVowel(charCurrent);

			// store where the word starts
			intWordStart = i;

		}
	}

	cout << endl;


}

bool isVowel(char charInput) {

	charInput = tolower(charInput);

	if((charInput == 'a') || (charInput == 'e') || (charInput == 'i') 
				|| (charInput == 'o') || (charInput == 'u')) {
				return true;
			}
			else {
				return false;
			}
}


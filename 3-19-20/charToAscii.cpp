#include<iostream>
using namespace std;

int main()
{
	char chrCharacter;

	//for(int i=33; i<127; i++)
	for(int i=0; i<256; i++)
	{
		chrCharacter = i;
		cout << chrCharacter << "\t->\t"<< i <<"\t\t";

		if(i%5 == 0)
			cout << endl;
	}
	
	return 0;
}
#include <iostream>
#include <string>

using namespace std;

string ReadString() {
	string StringValue;
	cout << "Entre Your Ful Name: ";
	getline(cin, StringValue);
	return StringValue;
}

void GetFirstLetterFromString(string StringValue) {
	/*
	* Another approach to get the first letter of each word :
		- Print the first character of the string directly.
		- Then, whenever a space is found, print the next character.
	* This method is simpler, but it has an issue:
	* If the first character in the string is a space, it will print
	* an unintended space or character.

	 cout << StringValue[0] << "   ";
	 for (int i = 0; i < StringValue.size(); i++) {
		if (StringValue[i] == ' ') {
			cout << StringValue[i + 1] << "   ";
		}
	 }	
	*/
	bool isFirstLetter = true;
	cout << "\nFirst letters of this string: \n";
	for (short i = 0; i < StringValue.length(); i++) {
		if (StringValue[i] != ' ' && isFirstLetter)
		{ 
			cout << StringValue[i] << endl;
		}         
		isFirstLetter = (StringValue[i] == ' ' ? true : false);
	}
}

int main()
{
	string FullName = ReadString();
	GetFirstLetterFromString(FullName);
}

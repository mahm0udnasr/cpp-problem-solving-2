#include <iostream>
#include <string>

using namespace std;

string ReadString() {
	string StringValue;
	cout << "Entre Your Ful Name: ";
	getline(cin, StringValue);
	return StringValue;
}

void LowerFirstLetterFromString(string StringValue) {
	bool isFirstLetter = true;
	for (short i = 0; i < StringValue.length(); i++) {
		if (StringValue[i] != ' ' && isFirstLetter)
		{ 
			StringValue[i] = tolower(StringValue[i]);
		}         
		isFirstLetter = (StringValue[i] == ' ' ? true : false);
	}
	cout << StringValue;
}

int main()
{
	string FullName = ReadString();
	LowerFirstLetterFromString(FullName);
}

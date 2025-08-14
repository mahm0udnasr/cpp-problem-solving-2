#include <iostream>
#include <string>
using namespace std;

string RemovePunctuationsFromString(string MyString) {
	string NewString = "";
	for (short i = 0; i < MyString.length(); i++) {
		if (!ispunct(MyString[i])) {
			NewString += MyString[i];
		}
	}
	return NewString;
}

int main()
{
	string S1 = "Welcome to Egypt, Egypt is a nice country; it's amazing.";
	cout << "Original String:\n" << S1;
	cout << "\n\nPunctuations Removed:\n" << RemovePunctuationsFromString(S1) << endl;
	return 0;
}

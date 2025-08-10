#include <iostream>
#include <string>

using namespace std;

string ReadString() {
	string StringValue;
	cout << "Entre Your Ful Name: ";
	getline(cin, StringValue);
	return StringValue;
}

int CountCapitalLetters(string MyString) {
	int CapitalLetters = 0;
	for (int i = 0; i < MyString.size(); i++) {
		if (isupper(MyString[i]) && MyString[i] != ' ') {
			CapitalLetters++;
		}
	}
	return CapitalLetters;
}

int CountSmallLetters(string MyString) {
	int SmallLetters = 0;
	for (int i = 0; i < MyString.size(); i++) {
		if (!(isupper(MyString[i])) && MyString[i] != ' ') {
			SmallLetters++;
		}
	}
	return SmallLetters;
}

int main()
{
	string FullName = ReadString();
	cout << "String Length : " << FullName.size() << endl;
	cout << "Capital Letters Length : " << CountCapitalLetters(FullName) << endl;
	cout << "Small Letters Length : " << CountSmallLetters(FullName) << endl;
}

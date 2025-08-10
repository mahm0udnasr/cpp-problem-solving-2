#include <iostream>
#include <string>

using namespace std;

string ReadString() {
	string StringValue;
	cout << "Entre Your Ful Name: ";
	getline(cin, StringValue);
	return StringValue;
}

char ReadChar() {
	char InputChar;
	cout << "Entre Char: ";
	cin >> InputChar;
	return InputChar;
}

int CountCharOfString(string MyString, char MyChar) {
	int Count = 0;
	for (int i = 0; i < MyString.size(); i++) {
		if (MyString[i] == MyChar) {
			Count++;
		}
	}
	return Count;
}

int main()
{
	string FullName = ReadString();
	char MyChar = ReadChar();
	cout << "Letter " << "'" << MyChar << "'" << " Count = " << CountCharOfString(FullName, MyChar);
}

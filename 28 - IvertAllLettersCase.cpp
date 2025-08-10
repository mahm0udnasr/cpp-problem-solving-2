#include <iostream>
#include <string>

using namespace std;

string ReadString() {
	string StringValue;
	cout << "Entre Your Ful Name: ";
	getline(cin, StringValue);
	return StringValue;
}

string InvertAllLetterCase(string MyString) {
	for (int i = 0; i < MyString.size(); i++) {
		if (!(isupper(MyString[i]))) {
			MyString[i] = toupper(MyString[i]);
		}
		else {
			MyString[i] = tolower(MyString[i]);
		}
	}
	return MyString;
}

int main()
{
	string FullName = ReadString();
	cout << "\nString after Invert All letters : \n" << InvertAllLetterCase(FullName) << endl;

}

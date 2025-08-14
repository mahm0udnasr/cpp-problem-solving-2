#include <iostream>
#include <string>
using namespace std;

string TrimLeft(string MyString) {
	for (short i = 0; i < MyString.length(); i++) {
		if (MyString[i] != ' ') {
			return MyString.substr(i, MyString.length() - i);
		}
	}
	return "";
}

string TrimRight(string MyString) {
	for (short i = MyString.length() -1; i >= 0; i--) {
		if (MyString[i] != ' ') {
			return MyString.substr(0, i + 1);
		}
	}
	return "";
}

string Trim(string MyString) {
	return TrimLeft(TrimRight(MyString));
}


int main()
{
	string MyString = "     Mahmoud Nasr     ";
	cout << "\nString     : " << MyString;
	cout << "\nTrim Left  : " << TrimLeft(MyString);
	cout << "\nTrim Right : " << TrimRight(MyString);
	cout << "\nTrim       : " << Trim(MyString);
	return 0;
}

#include <iostream>
#include <string>

using namespace std;

string ReadString() {
	string StringValue;
	cout << "Entre Your Ful Name: ";
	getline(cin, StringValue);
	return StringValue;
}

bool isVowel(char MyChar) {
	char arr[5] = { 'a', 'e', 'i', 'o', 'u' };
	for (int i = 0; i <= 5; i++) {
		if (arr[i] == MyChar) {
			return true;
		}
	}
	return false;
}

void PrintVowelsInString(string MyString) {
	cout << "Vowels in string are : ";
	for (int i = 0; i < MyString.size(); i++) {
		if (isVowel(tolower(MyString[i]))) {
			cout << MyString[i] << "   ";
		}
	}

}

int main()
{
	string FullName = ReadString();
	PrintVowelsInString(FullName);
}

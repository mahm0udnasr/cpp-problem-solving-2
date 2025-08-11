#include <iostream>
#include <string>

using namespace std;

string ReadString() {
	string StringValue;
	cout << "Entre Your Ful Name: ";
	getline(cin, StringValue);
	return StringValue;
}

void PrintEachWordInString(string MyString) {
	for (int i = 0; i < MyString.size(); i++) {
		if (MyString[i] != ' ') {
			cout << MyString[i];
		}
		else {
			cout << endl;
		}
	}
}


int main()
{
	string FullName = ReadString();
	PrintEachWordInString(FullName);

}

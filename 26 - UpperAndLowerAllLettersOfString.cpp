#include <iostream>
#include <string>

using namespace std;

string ReadString() {
	string StringValue;
	cout << "Entre Your Ful Name: ";
	getline(cin, StringValue);
	return StringValue;
}

string UpperAllLetterInString(string String) {
	for (int i = 0; i < String.size(); i++) {
		String[i] = toupper(String[i]);
	}
	return String;
}

string LowerAllLetterInString(string String) {
	for (int i = 0; i < String.size(); i++) {
		String[i] = tolower(String[i]);
	}
	return String;
}

int main()
{
	string FullName = ReadString();
	cout << "\nString after upper : \n" << UpperAllLetterInString(FullName) << endl;
	cout << "\nString after lower : \n" << LowerAllLetterInString(FullName) << endl;
}

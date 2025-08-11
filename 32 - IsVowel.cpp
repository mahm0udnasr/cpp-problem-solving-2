#include <iostream>
#include <string>

using namespace std;

char ReadChar() {
	char InputChar;
	cout << "Entre Char: ";
	cin >> InputChar;
	return InputChar;
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


int main()
{
	char MyChar = ReadChar();
	if (isVowel(tolower(MyChar))) {
		cout << "\nYes, Letter " << "'" << MyChar << "'" << " is vowel\n";
	}
	else {
		cout << "\nNo, Letter " << "'" << MyChar << "'" << " is not vowel\n";
	}
}

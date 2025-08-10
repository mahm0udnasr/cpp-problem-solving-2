#include <iostream>
#include <string>

using namespace std;

char ReadChar() {
	char InputChar;
	cout << "Entre Char: ";
	cin >> InputChar;
	return InputChar;
}

char InvertCharCase(char C) {
	if (isupper(C)) {
		return tolower(C);
	}
	else {
		return toupper(C);
	}
}


int main()
{
	char MyChar = ReadChar();
	cout << "\nChar after inverting case : " << InvertCharCase(MyChar) << endl;
}

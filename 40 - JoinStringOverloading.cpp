#include <iostream>
#include <string>
#include <vector>

using namespace std;

string JoinString(vector<string> vString, string Delim) {
	string String = "";
	for (string& s : vString) {
		String += s + Delim;
	}
	return String.substr(0, String.length() - Delim.length());
}

string JoinString(string arrString[3], short arrLength, string Delim) {
	string String = "";
	for (short i = 0; i < arrLength; i++) {
		String += arrString[i] + Delim;
	}
	return String.substr(0, String.length() - Delim.length());
}


int main()
{
	vector<string> vString = {"Mahmoud", "Nasr", "Mahmoud"};
	cout << "\nMy string from vector after join : " << JoinString(vString, " ") << endl;
	string arrString[] = { "Mahmoud", "Nasr", "Mahmoud" };
	cout << "\nMy string from array after join  : " << JoinString(arrString, 3, " ") << endl;
	return 0;
}

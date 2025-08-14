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


int main()
{
	vector<string> vString = {"Mahmoud", "Nasr", "Mahmoud"};
	cout << "My string after join : " << JoinString(vString, " ");
	return 0;
}

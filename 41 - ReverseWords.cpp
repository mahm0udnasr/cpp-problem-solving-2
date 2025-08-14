#include <iostream>
#include <string>
#include <vector>
using namespace std;

string ReadString() {
	string StringValue;
	cout << "Entre Your String: ";
	getline(cin, StringValue);
	return StringValue;
}

vector<string> SplitString(string S1, string Delim) {

	vector<string> vString;
	short pos = 0;
	string sWord;

	while ((pos = S1.find(Delim)) != std::string::npos)
	{
		sWord = S1.substr(0, pos);
		if (sWord != "")
		{
			vString.push_back(sWord);
		}
		S1.erase(0, pos + Delim.length());
	}

	if (S1 != "")
	{
		vString.push_back(S1);
	}

	return vString;
}


string ReverseString(vector<string> vString, string Delim) {
	string ReversedString = "";
	for (short i = vString.size() - 1; i >= 0; i--) {
		ReversedString += vString[i] + Delim;
	}
	return ReversedString.substr(0, ReversedString.length()-Delim.length());
}


int main()
{
	string MyString = ReadString();
	vector<string> vString;
	vString = SplitString(MyString, " ");
	cout <<  "String after reversing words : " << ReverseString(vString, " ");
	return 0;
}

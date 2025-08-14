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


vector<string> ReplaceString(vector<string> vString, string SearchedWord, string ReplacedWord) {
	for (string& s : vString) {
		if (s == SearchedWord) {
			s = ReplacedWord;
		}
	}
	return vString;
}


string JoinString(vector<string> vString, string Delim) {
	string String = "";
	for (string& s : vString) {
		String += s + Delim;
	}
	return String.substr(0, String.length() - Delim.length());
}

string ReplaceWordInString(string MyString, string SearchedWord, string ReplacedWord) {
	short pos = MyString.find(SearchedWord);
	while (pos != string::npos) {
		MyString = MyString.replace(pos, SearchedWord.length(), ReplacedWord);
		pos = MyString.find(SearchedWord);
	}
	return MyString;
}

int main()
{
	string MyString = ReadString();
	vector<string> vString;
	vString = SplitString(MyString, " ");
	cout << "\nString after Replace : \n";
	cout << JoinString(ReplaceString(vString, "Egypt", "Masr"), " ") << endl;
	cout << "\nSolve With Bulit in Function : \n";
	cout << ReplaceWordInString(MyString, "Egypt", "Masr") << endl;
	return 0;
}

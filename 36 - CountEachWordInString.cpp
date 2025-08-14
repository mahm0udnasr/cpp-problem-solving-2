#include <iostream>
#include <string>

using namespace std;

string ReadString() {
	string StringValue;
	cout << "Entre Your Ful Name: ";
	getline(cin, StringValue);
	return StringValue;
}

short CountWords(string S1) {
	string delim = " ";
	short Counter = 0;
	short pos = 0;
	string sWord;
	while ((pos = S1.find(delim)) != std::string::npos)     
	{         
		sWord =S1.substr(0, pos);
		if (sWord !="")         
		{             
			Counter++;
		}
		S1.erase(0, pos + delim.length());
	} 
	if (S1!="")     
	{         
		Counter++;     
	} 
	return Counter;
} 


int main()
{
	string FullName = ReadString();
	cout << "the number of words in your string is: " << CountWords(FullName);

}

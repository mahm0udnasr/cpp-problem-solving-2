#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct sClient
{
	string AccountNumber;
	string PinCode;
	string Name;
	string Phone;
	double AccountBalance;
};

sClient ReadNewClient() {
	sClient Client;

	cout << "Enter Account Number : ";
	getline(cin, Client.AccountNumber);

	cout << "Enter Pin Code       : ";
	getline(cin, Client.PinCode);

	cout << "Enter Name           : ";
	getline(cin, Client.Name);

	cout << "Enter Phone          : ";
	getline(cin, Client.Phone);

	cout << "Enter Acount Balance : ";
	cin >> Client.AccountBalance;

	return Client;
}

string ConvertRecordToLine(sClient Client, string Seperator = "#//#") {
	string stClientRecord = "";
	stClientRecord += Client.AccountNumber + Seperator;
	stClientRecord += Client.PinCode + Seperator;
	stClientRecord += Client.Name + Seperator;
	stClientRecord += Client.Phone + Seperator;
	stClientRecord += to_string(Client.AccountBalance);
	return stClientRecord;
}



int main()
{
	cout << "\nEnter Client Data \n\n";
	sClient Client;
	Client = ReadNewClient();
	cout << "\n\nClient record for saving is : \n";
	cout << ConvertRecordToLine(Client) << endl;
	return 0;
}

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

const string ClientsFileName = "Clients.txt";

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
	getline(cin >> ws, Client.AccountNumber);

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

void AddDataLineToFile(string FileName, string stDataLine) {
	fstream MyFile;
	MyFile.open(FileName, ios::out | ios::app);
	if (MyFile.is_open()) {
		MyFile << stDataLine << endl;
		MyFile.close();
	}
}

void AddNewClient() {
	sClient Client;
	Client = ReadNewClient();
	AddDataLineToFile(ClientsFileName, ConvertRecordToLine(Client));
}

void AddClients() {
	char AddMore = 'Y';
	do
	{
		system("cls");
		cout << "Adding NewClient \n\n";
		AddNewClient();
		cout << "\nClient Added Successfully,\n do you want add more clients [Y/N] : ";
		cin >> AddMore;
	} while (toupper(AddMore) == 'Y');
}


int main()
{
	AddClients();
	return 0;
}

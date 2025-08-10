#include <iostream>
#include <iomanip>

using namespace std;

short ReadPositiveNumber() {
	short Number;
	cout << "Entre a Positive Number: ";
	cin >> Number;
	return Number; 
}

void PrintFibonacciUsingRecursion(short Number, int Prev1, int Prev2) {
	int FebNumber = 0;
	if (Number > 0) {
		FebNumber = Prev2 + Prev1;
		Prev2 = Prev1;
		Prev1 = FebNumber;
		cout << FebNumber << "    ";
		PrintFibonacciUsingRecursion(Number - 1, Prev1, Prev2);
	}
}

int main()
{
	PrintFibonacciUsingRecursion(ReadPositiveNumber(), 0, 1);
}

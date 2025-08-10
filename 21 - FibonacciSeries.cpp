#include <iostream>
#include <iomanip>

using namespace std;

int ReadPositiveNumber() {
	int Number;
	cout << "Entre a Positive Number: ";
	cin >> Number;
	return Number; 
}

void GetFibonacciSeriesNumbers(int arr[100], int number) {
	int Prev1 = 0, Prev2 = 1;
	for (short i = 2; i < number; i++) {
		arr[i] = arr[Prev1] + arr[Prev2];
		Prev1++;
		Prev2++;
	}
}

void PrintFibonacciSeriesNumbers(int arr[100], int number) {
	for (int i = 0; i < number; i++) {
		cout << arr[i] << setw(1) << "    ";
	}

}


int main()
{
	int arr[100] = { 1, 1 };
	int Number = ReadPositiveNumber();
	GetFibonacciSeriesNumbers(arr, Number);
	PrintFibonacciSeriesNumbers(arr, Number);
}

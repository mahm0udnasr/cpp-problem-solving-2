#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

void PrintMatrix(int arr[3][3], short Rows, short Cols) {
    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Cols; j++) {
            cout << setw(3) << arr[i][j] << "    ";
        }
        cout << endl;
    }
}

void CountNumberInMatrix(int Matrix[3][3], short Rows, short Cols) {
    int SearchedNumber = 0, count = 0;
    cout << "\nEnter the number to get count : ";
    cin >> SearchedNumber;
    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Cols; j++) {
            if (Matrix[i][j] == SearchedNumber) {
                count++;
            }
        }
    }
    cout << "\nNumber " << SearchedNumber << " Count in matrix is " << count << endl;
}


int main()
{
    int Matrix[3][3] = { {9,1,12}, {0,9,1}, {0,9,9} };

    cout << "\nMatrix : \n";
    PrintMatrix(Matrix, 3, 3);
    CountNumberInMatrix(Matrix, 3, 3);
}

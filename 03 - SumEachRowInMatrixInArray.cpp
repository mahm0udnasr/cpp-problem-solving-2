#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int RandomNumber(int From, int To) {
    return rand() % To + From;
}

void FillMatrixWithRandomNumber(int arr[3][3], short Rows, short Cols) {
    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Cols; j++) {
            arr[i][j] = RandomNumber(1, 100);
        }
    }
}

void PrintMatrix(int arr[3][3], short Rows, short Cols) {
    cout << "\n The following is a 3x3 random matrix: \n";
    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Cols; j++) {
            cout << setw(3) << arr [i][j] << "    ";
        }
        cout << endl;
    }
}

void SumRowsInMatrix(int arr[3][3], short Rows, short Cols, int SumOfRows[3]) {
    cout << "\nSum of rows in matrix: \n";
    int sum = 0;
    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Cols; j++) {
            sum += arr[i][j];
        }
        SumOfRows[i] = sum;
        sum = 0;
    }
}

void PrintSumOfRows(int SumOfRows[3]) {
    for (int i = 0; i < 3; i++) {
        cout << "Row " << i + 1 << " = " << SumOfRows[i] << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int arr[3][3];
    int SumOfRows[3];
    FillMatrixWithRandomNumber(arr, 3, 3);
    PrintMatrix(arr, 3, 3);
    SumRowsInMatrix(arr, 3, 3, SumOfRows);
    PrintSumOfRows(SumOfRows);
}

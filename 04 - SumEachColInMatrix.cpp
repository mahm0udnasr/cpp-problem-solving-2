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
            cout << setw(3) << arr[i][j] << "    ";
        }
        cout << endl;
    }
}

void SumColsInMatrix(int arr[3][3], short Rows, short Cols) {
    cout << "\nSum of cols in matrix: \n";
    int sum = 0;
    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Cols; j++) {
            sum += arr[j][i];
        }
        cout << "Col " << i + 1 << " = " << sum;
        sum = 0;
        cout << endl;
    }
}


int main()
{
    srand((unsigned)time(NULL));
    int arr[3][3];
    FillMatrixWithRandomNumber(arr, 3, 3);
    PrintMatrix(arr, 3, 3);
    SumColsInMatrix(arr, 3, 3);
}

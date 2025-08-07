#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>

using namespace std;

int RandomNumber(int From, int To) {
    return rand() % To + From;
}

void FillMatrixWithRandomNumber(int arr[3][3], short Rows, short Cols) {
    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Cols; j++) {
            arr[i][j] = RandomNumber(0, 100);
        }
    }
}

void PrintMatrix(int Matrix[3][3], short Rows, short Cols) {
    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Cols; j++) {
            cout << setw(3) << Matrix[i][j] << "    ";
        }
        cout << endl;
    }
}

int GetMaxNumberInMatrix(int Matrix[3][3], short Rows, short Cols) {
    int MaxNumber = Matrix[0][0];
    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Cols; j++) {
            if (MaxNumber < Matrix[i][j]) {
                MaxNumber = Matrix[i][j];
            }
        }
    }
    return MaxNumber;
}

int GetMinNumberInMatrix(int Matrix[3][3], short Rows, short Cols) {
    int MinNumber = Matrix[0][0];
    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Cols; j++) {
            if (MinNumber > Matrix[i][j]) {
                MinNumber = Matrix[i][j];
            }
        }
    }
    return MinNumber;
}


int main()
{
    srand((unsigned)time(NULL));
    int arr1[3][3];

    FillMatrixWithRandomNumber(arr1, 3, 3);

    cout << "\nMatrix 1 : \n";
    PrintMatrix(arr1, 3, 3);

    cout << "\nMin Number is : " << GetMinNumberInMatrix(arr1, 3, 3) << endl;
    cout << "\nMax Number is : " << GetMaxNumberInMatrix(arr1, 3, 3) << endl;
}

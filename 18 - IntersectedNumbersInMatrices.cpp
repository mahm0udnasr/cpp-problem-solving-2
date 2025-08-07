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
            arr[i][j] = RandomNumber(10, 20);
        }
    }
}

void PrintMatrix(int arr[3][3], short Rows, short Cols) {
    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Cols; j++) {
            cout << setw(3) << arr[i][j] << "    ";
        }
        cout << endl;
    }
}

bool CheckNumberIsExists(int Matrix[3][3],int SearchedNumber, short Rows, short Cols) {
    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Cols; j++) {
            if (Matrix[i][j] == SearchedNumber) {
                return true;
            }
        }
    }
    return false;
}

void IntersectedNumberInMatrix(int arr1[3][3], int arr2[3][3], short Rows, short Cols) {
    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Cols; j++) {
            if (CheckNumberIsExists(arr2, arr1[i][j], 3, 3)) {
                cout << setw(3) << arr1[i][j] << "    ";
            }
        }
    }
    cout << endl;
}

int main()
{
    srand((unsigned)time(NULL));
    int arr1[3][3], arr2[3][3];

    FillMatrixWithRandomNumber(arr1, 3, 3);
    FillMatrixWithRandomNumber(arr2, 3, 3);

    cout << "\nMatrix 1 : \n";
    PrintMatrix(arr1, 3, 3);

    cout << "\nMatrix 2 : \n";
    PrintMatrix(arr2, 3, 3);

    cout << "\nIntersected Numbers are : " << endl;
    IntersectedNumberInMatrix(arr1, arr2, 3, 3);

}

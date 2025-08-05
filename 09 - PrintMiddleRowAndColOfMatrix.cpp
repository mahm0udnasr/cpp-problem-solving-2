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
            arr[i][j] = RandomNumber(1, 100);
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


void PrintMiddleRowOfMatrix(int arr[3][3], short Rows, short Cols) {
    for (int j = 0; j < Cols; j++) {
        cout << setw(3) << arr[(Rows/2)][j] << "    ";
    }
}

void PrintMiddleColOfMatrix(int arr[3][3], short Rows, short Cols) {
    for (int i = 0; i < Rows; i++) {
        cout << setw(3) << arr[i][Cols / 2] << "    ";
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int arr1[3][3];

    FillMatrixWithRandomNumber(arr1, 3, 3);

    cout << "\nMatrix 1 : \n";
    PrintMatrix(arr1, 3, 3);
    cout << "\nMiddle Row Of Matrix is : \n";
    PrintMiddleRowOfMatrix(arr1, 3, 3);
    cout << "\nMiddle Col Of Matrix is : \n";
    PrintMiddleColOfMatrix(arr1, 3, 3);
}

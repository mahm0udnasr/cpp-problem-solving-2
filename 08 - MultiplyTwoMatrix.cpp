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
    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Cols; j++) {
            cout << setw(3) << arr[i][j] << "    ";
        }
        cout << endl;
    }
}

void MultiplayTwoMatrix(int arr1[3][3], int arr2[3][3],int MultiplayResult[3][3], short Rows, short Cols) {
    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Cols; j++) {
            MultiplayResult[i][j] = arr1[i][j] * arr2[i][j];
        }
    }
}

void PrintMultiplayMatrixResult(int MultiplayResult[3][3], short Rows, short Cols) {
    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Cols; j++) {
            cout << setw(3) << MultiplayResult[i][j] << "    ";
        }
        cout << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int arr1[3][3], arr2[3][3], MultiplayResult[3][3];

    FillMatrixWithRandomNumber(arr1, 3, 3);
    FillMatrixWithRandomNumber(arr2, 3, 3);
    MultiplayTwoMatrix(arr1, arr2, MultiplayResult, 3, 3);

    cout << "\nMatrix 1 : \n";
    PrintMatrix(arr1, 3, 3);
    cout << "\nMatrix 2 : \n";
    PrintMatrix(arr2, 3, 3);
    cout << "\nResults: \n";
    PrintMultiplayMatrixResult(MultiplayResult, 3, 3);
}

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

bool isPalindromeMatrix(int Matrix[3][3], short Rows, short Cols) {
    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Cols; j++) {
            if (Matrix[i][j] != Matrix[i][Cols - 1 - j]) {
                return false;
            }
        }
    }
    return true;
}


int main()
{
    srand((unsigned)time(NULL));
    //int arr1[3][3] = { {1,2,1}, {5,5,5}, {7,3,7} };
    int arr1[3][3] = { {1,2,1}, {5,5,5}, {7,3,8} };

    cout << "\nMatrix 1 : \n";
    PrintMatrix(arr1, 3, 3);

    if (isPalindromeMatrix(arr1, 3, 3)) {
        cout << "\nYes, Matrix is Palindrome" << endl;
    }
    else {
        cout << "\nNo, Matrix is not Palindrome" << endl;
    }
}

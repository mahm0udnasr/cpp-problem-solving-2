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

bool CheckNumberIsExists(int Matrix[3][3], short Rows, short Cols) {
    int SearchedNumber = 0;

    cout << "\nEnter the number to search : ";
    cin >> SearchedNumber;

    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Cols; j++) {
            if (Matrix[i][j] == SearchedNumber) {
                return true;
            }
        }
    }
    return false;
}


int main()
{
    int Matrix[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };

    cout << "\nMatrix : \n";
    PrintMatrix(Matrix, 3, 3);

    if (CheckNumberIsExists(Matrix, 3, 3)) {
        cout << "\nYes, it is there" << endl;
    }
    else {
        cout << "\nNo, it is not there" << endl;
    }
}

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

bool IsIdentityMatrix(int Matrix[3][3], short Rows, short Cols) {
    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Cols; j++) {
            if (i == j && Matrix[i][j] != 1) {
                return false;
            }
            else if (i != j && Matrix[i][j] != 0) {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    srand((unsigned)time(NULL));
    int Matrix[3][3] = { {1,0,0}, {0,1,0}, {0,0,1} };

    cout << "\nMatrix : \n";
    PrintMatrix(Matrix, 3, 3);

    if (IsIdentityMatrix(Matrix, 3, 3)) {
        cout << "\nYes, Matrix is identity" << endl;
    }
    else {
        cout << "\nNo, Matrix is not identity" << endl;
    }
}

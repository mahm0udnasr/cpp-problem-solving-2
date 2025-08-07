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

bool IsSparseMatrix(int Matrix[3][3], short Rows, short Cols) {
    int CountNumbersWithoutZero = 0, CountOfZero = 0;
    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Cols; j++) {
            if (Matrix[i][j] != 0) {
                CountNumbersWithoutZero++;
            }
            else  {
                CountOfZero++;
            }
        }
    }
    return CountOfZero > CountNumbersWithoutZero;
}


int main()
{
    int Matrix[3][3] = { {9,0,0}, {0,9,0}, {0,9,0} };

    cout << "\nMatrix : \n";
    PrintMatrix(Matrix, 3, 3);

    if (IsSparseMatrix(Matrix, 3, 3)) {
        cout << "\nYes, Matrix is sparse" << endl;
    }
    else {
        cout << "\nNo, Matrix is not sparse" << endl;
    }
}

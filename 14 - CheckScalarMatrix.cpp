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

bool IsScalarMatrix(int Matrix[3][3], short Rows, short Cols) {
    int temp = Matrix[0][0];
    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Cols; j++) {
            if (i == j && Matrix[i][j] != temp) {
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
    int Matrix[3][3] = { {9,0,0}, {0,9,0}, {0,0,9} };

    cout << "\nMatrix : \n";
    PrintMatrix(Matrix, 3, 3);

    if (IsScalarMatrix(Matrix, 3, 3)) {
        cout << "\nYes, Matrix is scalar" << endl;
    }
    else {
        cout << "\nNo, Matrix is not scalar" << endl;
    }
}

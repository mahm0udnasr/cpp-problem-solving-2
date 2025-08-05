#include <iostream>
#include <iomanip>

using namespace std;

void FillMatrixWithOrderNumber(int arr[3][3], short Rows, short Cols) {
    short counter = 0;
        for (short i = 0; i < Rows; i++) {
            for (short j = 0; j < Cols; j++) {
                counter++;
                arr[i][j] = counter;
            }
        }
}

void PrintMatrix(int arr[3][3], short Rows, short Cols) {
    cout << "\n The following is a 3x3 ordered matrix: \n";
    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Cols; j++) {
            cout << setw(3) << arr[i][j] << "    ";
        }
        cout << endl;
    }
}

void PrintMatrixTransposed(int arr[3][3], short Rows, short Cols) {
    cout << "\n The following is a 3x3 transposed matrix: \n";
    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Cols; j++) {
            cout << setw(3) << arr[j][i] << "    ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[3][3];
    FillMatrixWithOrderNumber(arr, 3, 3);
    PrintMatrix(arr, 3, 3);
    PrintMatrixTransposed(arr, 3, 3);
}

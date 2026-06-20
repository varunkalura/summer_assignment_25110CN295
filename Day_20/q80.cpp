//column wise sum
#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;
    int A[100][100];
    cout << "Enter matrix elements:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> A[i][j];
        }
    }
    cout << "\ncolumn-wise sums:\n";
    for(int i = 0; i < cols; i++) {
        int sum = 0;

        for(int j = 0; j < rows; j++) {
            sum += A[i][j];
        }

        cout << "Sum of column " << i + 1 << " = " << sum << endl;
    }
    return 0;
}
//diagonal sum
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int A[100][100];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }
    int primary = 0, secondary = 0;
    for(int i = 0; i < n; i++) {
        primary += A[i][i];
        secondary += A[i][n - 1 - i];
    }
    cout << "Primary diagonal sum = " << primary << endl;
    cout << "Secondary diagonal sum = " << secondary << endl;
    return 0;
}
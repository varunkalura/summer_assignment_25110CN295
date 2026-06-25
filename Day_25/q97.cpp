//merge sorted arrays
#include <iostream>
using namespace std;

int main() {
    int a[] = {1, 3, 5};
    int b[] = {2, 4, 6};

    int n = 3, m = 3;
    int i = 0, j = 0;

    while(i < n && j < m) {
        if(a[i] < b[j])
            cout << a[i++] << " ";
        else
            cout << b[j++] << " ";
    }

    while(i < n)
        cout << a[i++] << " ";

    while(j < m)
        cout << b[j++] << " ";

    return 0;
}
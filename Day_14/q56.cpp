//find dupicates in array
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 2, 4, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);
    cout << "Duplicate elements: ";
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            cout << arr[i] << " ";
        }
    }
    return 0;
}
//move zeroes to end
#include <iostream>
using namespace std;

int main() {
    int arr[] = {5,7,8,0,0,4,3,0,1,2,9,0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
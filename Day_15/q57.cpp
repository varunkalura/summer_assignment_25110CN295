//reverse an array
#include <iostream>
using namespace std;

int main() {
    int arr[] = {4,6,4,5,7,3,8,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int left = 0, right = n - 1;
    while (left < right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
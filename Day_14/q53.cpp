//linear search
#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    cout << "enter the length: ";
    cin >> n;
    int arr[n];
    cout<<"enter the elements :\n";
    for (int i = 0; i < n; i++) {
        cout<<"element at index "<<i<<" : ";
        cin >> arr[i];
    }
    int key;
    cout << "Enter element to search: ";
    cin >> key;
    int result = linearSearch(arr, n, key);
    if (result != -1)
        cout << "Element found at index " << result;
    else
        cout << "Element not found";
    return 0;
}
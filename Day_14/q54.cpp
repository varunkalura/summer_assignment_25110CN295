//frequency of an element

#include <iostream>
using namespace std;

int frequency(int arr[], int n, int key) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {1,4,5,6,6,7,8,4,3,1,1,1,3,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key;
    cout<<"enter the element: ";
    cin>>key;
    cout<<"frequency is "<<frequency(arr,n,key);
    return 0;
}
//largest and smallest element
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    int large = arr[0];
    int small = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > large) {
            large = arr[i];
        }
        if(arr[i] < small) {
            small = arr[i];
        }
    }
    cout << "Largest element = " << large << endl;
    cout << "Smallest element = " << small << endl;
    return 0;
}
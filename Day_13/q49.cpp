//input and display array:

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the length of array : ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"enter the element at "<<i<<" index : ";
        cin>>arr[i];
    }
    cout<<"the elements are :\n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
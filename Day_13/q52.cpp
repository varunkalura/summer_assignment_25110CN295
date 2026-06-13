//count even and odd

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
    int count_even=0;
    int count_odd=0;
    for(int i = 0; i < n; i++) {
        if(arr[i]%2==0){
            count_even++;
        }
        else{
            count_odd++;
        }
    }
    cout<<"Even numbers : "<<count_even<<endl;
    cout<<"odd numbers : "<<count_odd<<endl;
    return 0;
}
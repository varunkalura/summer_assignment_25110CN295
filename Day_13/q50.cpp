//to find sum and average of array

#include <iostream>
using namespace std;

int main(){
    int arr[]={2,5,4,6,2,4};
    int length= sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    for(int i=0; i<length; i++){
        sum+=arr[i];
    }
    cout<<"sum is "<<sum<<endl;
    cout<<"average is "<<sum/length;
    return 0;
}
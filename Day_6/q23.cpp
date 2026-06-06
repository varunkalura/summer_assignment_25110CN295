//count set bits in a number
#include <iostream>
using namespace std;

int main(){
    int n, count=0;
    cout<<"enter a number : ";
    cin>>n;
    if (n<0){
        cout<<"only for positive values";
    }
    else{
        while (n != 0){
            if(n%2==1){
                count++;
            }
            n=n/2;
        }
    }
    cout<<"total bits: "<<count;
    return 0;
}
//check whether the number is prime
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    int flag=0;
    for(int i=2; i<n; i++){
        if(n%i==0){
            flag=1;
        }
    }
    if(flag==0){
        cout<<"it is a prime number";
    }
    else{
        cout<<"not a prime number";
    }
    return 0;
}
//check prime function

#include <iostream>
using namespace std;

bool prime(int x){
    if(x<2){
        return false;
    }
    for(int i=2; i<x; i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int a;
    cout<<"enter number:";
    cin>>a;
    if(prime(a)==true){
        cout<<"it is prime";
    }
    else{
        cout<<"not prime";
    }

    return 0;
}
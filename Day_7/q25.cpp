//recursive factorial
#include <iostream>
using namespace std;

int factorial(int n){
    if( n==1 || n==0 ){
        return 1;
    }
    n = n*factorial(n-1);
    return n;
}

int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    cout<<"the factorial is "<<factorial(n);
    return 0;
}
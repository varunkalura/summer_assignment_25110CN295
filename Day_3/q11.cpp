//to find GCD of two numbers
#include <iostream>
using namespace std;

int main(){
    int n,m,temp;
    cout<<"enter first number: ";
    cin>>n;
    cout<<"enter second number: ";
    cin>>m;
    while(m>0){
        temp=m;
        m=n%m;
        n=temp;
    }
    cout<<"gcd of these numbers : "<<n;
    return 0;
}
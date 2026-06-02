//write a program to find sum of digits of a number
#include <iostream>
using namespace std;

int main(){
    int n, last, sum=0;
    cout<<"enter a number: ";
    cin>>n;
    while(n>0){
        last=n%10;
        n=n/10;
        sum+=last;
    }
    cout<<"sum of digits: "<<sum;
    return 0;
}
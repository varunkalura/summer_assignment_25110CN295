//write a program to find product of digits of a number
#include <iostream>
using namespace std;

int main(){
    int n, last, product=1;
    cout<<"enter a number: ";
    cin>>n;
    while(n>0){
        last=n%10;
        n=n/10;
        product*=last;
    }
    cout<<"product of digits: "<<product;
    return 0;
}
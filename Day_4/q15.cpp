//to check an armstrong number
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n, count=0, ld;
    cout<<"enter a number : ";
    cin>>n;
    if(n==0){
        cout<<"it is armstrong";
    }
    int temp=n, arm=0;
    while(temp != 0){
        temp=temp/10;
        count++;
    }
    temp=n;
    while(temp != 0){
        ld=temp%10;
        temp=temp/10;
        arm += pow(ld,count);
    }
    if(arm==n){
        cout<<"it is armstrong";
    }
    else{
        cout<<"not armstrong";
    }
    return 0;
}
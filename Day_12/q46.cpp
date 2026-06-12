//function for palindrome

#include <iostream>
#include <math.h>
using namespace std;

bool armstrong(int n){
    int temp=n, count=0, arm=0;
    while(temp != 0){
        temp=temp/10;
        count++;
    }
    int temp2=n;
    while(temp2 != 0){
        arm+=pow(temp2 % 10, count);
        temp2=temp2/10;
    }
    if(arm==n){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    if(armstrong(n)==true){
        cout<<"its armstrong";
    }
    else{
        cout<<"not armstrong";
    }
    return 0;
}
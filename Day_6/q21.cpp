//decimal to binary
#include <iostream>
using namespace std;

int main(){
    int n, rem, sum=0, position=1;
    cout<<"enter a decimal number : ";
    cin>>n;
    if(n<=0){
        cout<<"only for positive number!";
    }
    else{
        while(n>0){
            rem = n%2;
            n = n/2;
            sum = sum + rem*position;
            position = position*10;
        }
        cout<<"binary form : "<<sum;
    }
}
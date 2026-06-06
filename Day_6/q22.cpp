//binary to decimal
#include <iostream>
using namespace std;

int main(){
    int n, rem, sum=0, position=1;
    cout<<"enter a binary number : ";
    cin>>n;
    if(n<=0){
        cout<<"only for positive number!";
    }
    else{
        while(n>0){
            rem = n%10;
            n = n/10;
            sum = sum + rem*position;
            position = position*2;
        }
        cout<<"decimal form : "<<sum;
    }
}
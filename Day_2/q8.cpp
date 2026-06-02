//check whether the number is palindrome
#include <iostream>
using namespace std;

int main(){
    int n, ld, n1=0;
    cout<<"enter a number: ";
    cin>>n;
    int temp=n;
    while(n>0){
        ld=n%10;
        n1=(n1*10)+ld;
        n=n/10;
    }
    if(temp==n1){
        cout<<"the number is palindrome";
    }
    else{
        cout<<"the number is not palindrome";
    }
    return 0;
}
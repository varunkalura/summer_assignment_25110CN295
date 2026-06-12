//function for palindrome

#include <iostream>
using namespace std;

bool palindrome(int n){
    int rev=0,temp=n;
    while(temp != 0){
        rev=rev*10 + (temp%10);
        temp=temp/10;
    }
    if(rev==n){
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
    if(palindrome(n)==true){
        cout<<"its palindrome";
    }
    else{
        cout<<"not palindrome";
    }
    return 0;
}
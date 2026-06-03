//to find LCD of two numbers
#include <iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"enter first number: ";
    cin>>n;
    cout<<"enter second number: ";
    cin>>m;
    int temp1=n*m;
    while(m>0){
        int temp2=m;
        m=n%m;
        n=temp2;
    }
    cout<<"lcd of these numbers : "<<(temp1/n);
    return 0;
}
//reversing a number
#include <iostream>
using namespace std;

int main(){
    int n, ld, n1=0;
    cout<<"enter a number: ";
    cin>>n;
    while(n>0){
        ld=n%10;
        n1=(n1*10)+ld;
        n=n/10;
    }
    cout<<"the reverse is "<<n1;
    return 0;
}
//largest prime factor
#include <iostream>
using namespace std;

int lpf(int n){
    int max=1;
    while(n%2==0){
        max=2;
        n=n/2;
    }
    for(int i=3; i*i<=n; i+=2){
        while(n%i==0){
            max=i;
            n=n/i;
        }
    }
    if(n>2){
        max=n;
    }
    return max;
}

int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    if(n<=1){
        cout<<"no prime factors";
    }
    else{
        cout<<"largest prime factor : "<<lpf(n);
    }
    return 0;
}
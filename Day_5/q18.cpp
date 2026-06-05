//check strong number
#include <iostream>
using namespace std;

int fact(int x){
    if(x==0){
        return 1;
    }
    x=x*fact(x-1);
    return x;
    
}


int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    int temp=n;
    if(n<=0){
        cout<<"not a strong number";
    }
    else
    {
        int last, strong=0;
        while(n != 0){
            last=n%10;
            n=n/10;
            strong+=fact(last);
        }
        if(strong==temp){
            cout<<"it is a strong number";
        }
        else{
            cout<<"not a strong number";
        }
    }
    return 0;
}
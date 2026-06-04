//print armstrong numbers in a range
#include <iostream>
#include <math.h>
using namespace std;

int armstrong(int n){
    int count=0, ld;
    if(n==0){
        return 0;
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
        return n;
    }
    else{
        return 0;
    }
}

int main(){
    int x,y;
    cout<<"enter the lower limit : ";
    cin>>x;
    cout<<"enter the upper limit : ";
    cin>>y;
    for(int i=x; i<=y; i++){
        if( armstrong(i)== i){
            cout<<i<<"\t";
        }
    }
    return 0;
}
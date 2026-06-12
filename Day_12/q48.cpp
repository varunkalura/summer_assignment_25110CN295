//perfect number

#include <iostream>
using namespace std;

bool perfect(int x){
    int perf=0;
    for(int i=1; i<x; i++){
        if(x%i==0){
            perf+=i;
        }
    }
    if(perf==x){
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
    if(perfect(n)==true){
        cout<<"its perfect";
    }
    else{
        cout<<"not perfect";
    }
    return 0;
}
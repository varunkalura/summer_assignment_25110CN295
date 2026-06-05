//check perfect number
#include <iostream>
using namespace std;

int main(){
    int n, sum=0;
    cout<<"enter a number : ";
    cin>>n;
    if(n<=0){
        cout<<"not perfect";
    }
    else{
        for(int i=1; i<n; i++){
            if(n%i==0){
            sum+=i;
            }
        }
        if(sum==n){
        cout<<"it is perfect";
        }
        else{
        cout<<"not perfect";
        }
    }
    return 0;
}
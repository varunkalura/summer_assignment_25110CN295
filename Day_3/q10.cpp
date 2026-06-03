//to print prime number in a range
#include <iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"enter the lower limit(must be greater than 1) : ";
    cin>>n;
    cout<<"enter the upper limit : ";
    cin>>m;
    cout<<"prime numbers are: "<<endl;
    for(int i=n; i<=m; i++){
        int flag=0;
        for(int j=2; j<i; j++){
            if(i%j==0){
                flag+=1;
            }
        }
        if(flag==0){
            cout<<i<<endl;
        }
    }
    return 0;
}
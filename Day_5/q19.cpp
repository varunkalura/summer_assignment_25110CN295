//factors of a number
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    cout<<"the factors are :"<<endl;
    if(n==0){
        cout<<"infinite factors";
    }
    else if(n<0){
        for(int i=n; i<=-n; i++){
            if(i != 0 && n%i==0){
                cout<<i<<"\t";
            }
        }
    }
    else{
        for(int i=1; i<=n; i++){
            if(n%i==0){
                cout<<i<<"\t";
            }
        }
    }
    return 0;
}
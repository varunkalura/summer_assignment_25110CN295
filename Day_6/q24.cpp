//find x^n without pow() function
#include <iostream>
using namespace std;

int main(){
    int n,x;
    cout<<"enter a number : ";
    cin>>x;
    cout<<"enter the power : ";
    cin>>n;
    int result=1;
    for(int i=1; i<=n; i++){
        result = x*result;
    }
    cout<<result;
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int n, factorial=1;
    cout<<"enter the number: ";
    cin>>n;
    for(int i=n; i>=1; i--){
        factorial*=i;
    }
    cout<<"the factorial of the number is "<<factorial;
    return 0;
}
//recursive sum of digits
#include <iostream>
using namespace std;

int sum(int n){
    if (n==0){
        return 0;
    }
    int ld=n%10;
    return ld+sum(n/10);
}

int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    cout<<"the sum of digits : "<<sum(n);

    return 0;
}
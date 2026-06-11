//sum function

#include <iostream>
using namespace std;

int sum_of_digits(int x, int y){
    return x+y;
}
int main(){
    int a,b;
    cout<<"enter 1st number:";
    cin>>a;
    cout<<"enter 2nd number:";
    cin>>b;
    cout<<"the sum is "<<sum_of_digits(a,b);

    return 0;
}
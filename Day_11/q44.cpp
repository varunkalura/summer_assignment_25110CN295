//function to find factorial

//check prime function

#include <iostream>
using namespace std;

int fact(int x){
    int factorial=1;
    for(int i=x; i>=1; i--){
        factorial*=i;
    }
    return factorial;
}
int main(){
    int a;
    cout<<"enter number:";
    cin>>a;
    cout<<"the factorial is "<<fact(a);
    return 0;
}
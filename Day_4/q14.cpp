//nth fibonacci term
#include <iostream>
using namespace std;

int fib(int n) {
    int first=0, second=1, next;
    for(int i=1; i<=n; i++){
        if(i==1 || i==2){
            next=i;
        }
        else {
            next=first+second;
            first=second;
            second=next;
        }
    }
    return next;
}

int main(){
    int n;
    cout<<"enter the term : ";
    cin>>n;
    cout<<"the fibonacci number at this term is: "<<fib(n);

    return 0;
}
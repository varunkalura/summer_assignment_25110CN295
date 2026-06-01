#include <iostream>
using namespace std;

int main(){
    int n, product;
    cout<<"enter the number: ";
    cin>>n;
    cout<<"the table is:"<<endl;
    for(int i=1; i<=10; i++){
        product=n*i;
        cout<<product<<endl;
    }
    return 0;
}
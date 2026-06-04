//fibonacci series 0 1 1 2 3 5
#include <iostream>
using namespace std;

int main(){
    int first=0, second=1;
    int n, next;
    cout<<"enter a value :";
    cin>>n;
    cout<<"fibonacci series :"<<endl;
    for(int i=0; i<=n; i++){
        if(i<=1){
            cout<<i<<"\t";
        }
        next=first+second;
        first=second;
        second=next;
        cout<<next<<"\t";
    }
    return 0;
}
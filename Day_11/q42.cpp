//function to find maximum

#include <iostream>
using namespace std;

int maximum(int x, int y){
    if(x>=y){
        return x;
    }
    else{
        return y;
    }

}
int main(){
    int a,b;
    cout<<"enter 1st number:";
    cin>>a;
    cout<<"enter 2nd number:";
    cin>>b;
    cout<<"maximum is "<<maximum(a,b);

    return 0;
}
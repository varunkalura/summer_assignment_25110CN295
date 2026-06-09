//given pattern:
// A
// BB
// CCC
// DDDD
// EEEEE

#include <iostream>
using namespace std;

int main(){
    for(char i='A'; i<'F'; i++){
        for(char j='A'; j<=i; j++){
            cout<<i;
        }
        cout<<"\n";
    }
    return 0;
}
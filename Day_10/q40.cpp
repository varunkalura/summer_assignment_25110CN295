//given pattern:
//     A 
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA

#include <iostream>
using namespace std;

int main(){
    for(char i='A'; i<='E'; i++){
        for(int j=1; j<='E'-i; j++){
            cout<<" ";
        }
        for(char j='A'; j<=i; j++){
            cout<<j;
        }
        for(char j=i-1; j>='A'; j--){
            cout<<j;
        }
        cout<<"\n";
    }
    return 0;
}
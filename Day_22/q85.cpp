//palindrome string
#include <iostream>
using namespace std;

int main(){
    string s;
    cout<<"enter : ";
    cin>>s;
    int l=0;
    int r=s.length()-1;
    bool pal=true;
    while(l<r){
        if(s[l]!=s[r]){
            pal=false;
            break;
        }
        l++;
        r--;
    }
    if(pal) cout<<"palindrome";
    else cout<<"not palindrome";
    return 0;
}
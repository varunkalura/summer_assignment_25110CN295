//convert lowercase to uppercase
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"enter string: ";
    getline(cin,s);
    for(int i=0; i<s.length(); i++){
        s[i]=toupper(s[i]);
    }
    cout<<"uppercase string: "<<s;
    return 0;
}
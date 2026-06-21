//to find string length without strlen()
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"enter string: ";
    getline(cin,s);
    int count=0;
    for(int i=0; s[i] != '\0'; i++){
        count++;
    }
    cout<<"length of string is "<<count;
    return 0;
}
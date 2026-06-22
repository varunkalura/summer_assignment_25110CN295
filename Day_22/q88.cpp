//remove spaces
#include <iostream>
using namespace std;

int main(){
    string s;
    cout<<"enter: ";
    getline(cin,s);
    int j=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]!=' '){
            s[j]=s[i];
            j++;
        }
    }
    s.resize(j);
    cout<<"new: "<<s;
    return 0;
}
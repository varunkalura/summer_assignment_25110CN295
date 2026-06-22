//count words
#include <iostream>
using namespace std;

int main(){
    string s;
    cout<<"enter: ";
    getline(cin,s);

    int count=0;
    bool inword= false;
    for(char ch:s){
        if(ch!=' ' && !inword){
            count++;
            inword=true;
        }
        else if(ch==' '){
            inword=false;
        }
    }
    cout<<"number os words: "<<count;
    return 0;
}
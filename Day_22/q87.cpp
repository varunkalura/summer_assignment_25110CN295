//character frequency
#include <iostream>
using namespace std;

int main(){
    string s;
    cout<<"enter: ";
    getline(cin,s);

    int freq[256]={0};

    for(char ch:s){
        freq[ch]++;
    }
    for(int i=0; i<256; i++){
        if(freq[i]>0){
            cout<<char(i)<<":"<<freq[i]<<endl;
        }
    }
    return 0;
}
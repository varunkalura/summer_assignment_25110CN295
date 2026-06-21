//count vowels and consonaants
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"enter string: ";
    getline(cin,s);
    int vowel=0, con=0;
    for(char ch : s){
        ch=tolower(ch);
        if(isalpha(ch)){
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') vowel++;
            else con++;
        }
    }
    cout<<"vowels = "<<vowel<<endl;
    cout<<"consonants = "<<con;
    return 0;
}
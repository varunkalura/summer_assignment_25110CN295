//reverse a string
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"enter string: ";
    getline(cin,s);

    int left=0;
    int right=s.length()-1;
    while(left<right){
        swap(s[left],s[right]);
        left++;
        right--;
    }
    cout<<"reverse string: "<<s;
    return 0;
}
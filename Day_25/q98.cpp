//common characters in a string
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    int freq[256] = {0};

    for(char ch : s1)
        freq[ch] = 1;

    cout << "Common characters: ";

    for(char ch : s2) {
        if(freq[ch] == 1) {
            cout << ch << " ";
            freq[ch] = 0;
        }
    }

    return 0;
}
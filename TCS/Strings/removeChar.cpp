//Remove char from frist string present in second string
#include<bits/stdc++.h>
using namespace std;

int main() {

    string str1 = "abcdef";
    string str2 = "cefz";

    int freq[256] = {0};

    // Store all characters of str2
    for(char ch : str2){
        freq[ch] = 1;
    }

    // Print characters of str1 that are not present in str2
    for(char ch : str1){
        if(freq[ch] == 0){
            cout << ch;
        }
    }

    return 0;
}
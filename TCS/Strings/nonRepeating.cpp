#include<bits/stdc++.h>
using namespace std;

int main() {
    string str = "Sumit Kumar";

    int freq[26] = {0};

    // Count frequency
    for(char ch : str) {
        ch = tolower(ch);

        if(ch >= 'a' && ch <= 'z')
            freq[ch-'a']++;
    }

    // Print non-repeating characters
    for(int i=0; i<26; i++) {
        if(freq[i] == 1) {
            cout << (char)(i+'a') << " ";
        }
    }
}
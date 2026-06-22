//Count the unique characters in the string
#include<bits/stdc++.h>
using namespace std;

int main() {
    string str = "programming";

    int freq[256] = {0};

    for(char ch : str) {
        freq[ch]++;
    }

    int count = 0;

    for(int i = 0; i < 256; i++) {
        if(freq[i] > 0)
            count++;
    }

    cout << count;
}
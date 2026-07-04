#include<bits/stdc++.h>
using namespace std;

int main() {

    string s = "Google Doc";

    string currentWord = "";
    string largestWord = "";

    for(char ch : s) {

        if(ch != ' ') {
            currentWord += ch;
        }
        else {
            if(currentWord.length() > largestWord.length()) {
                largestWord = currentWord;
            }
            currentWord = "";
        }
    }

    // Compare the last word
    if(currentWord.length() > largestWord.length()) {
        largestWord = currentWord;
    }

    cout << "Largest Word: " << largestWord;

    return 0;
}
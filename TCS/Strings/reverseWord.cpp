#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        string res = "";

        // Start from the last character
        int i = s.size() - 1;

        while (i >= 0) {

            // Skip extra spaces
            while (i >= 0 && s[i] == ' ')
                i--;

            // If string is finished
            if (i < 0)
                break;

            // Store the last index of current word
            int end = i;

            // Move to the beginning of the word
            while (i >= 0 && s[i] != ' ')
                i--;

            // Extract the word
            string word = s.substr(i + 1, end - i);

            // Add space before next word
            if (!res.empty())
                res += " ";

            // Add word to answer
            res += word;
        }

        return res;
    }
};

int main() {
    Solution obj;

    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    cout << "Reversed words: " << obj.reverseWords(s);

    return 0;
}
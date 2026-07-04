#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to calculate sum of all numbers in a string
    int sumOfNumbers(string s) {
        // Variable to keep track of total sum
        int sum = 0;
        // Temporary string to store digits
        string temp = "";
        
        // Loop through each character in the string
        for (char c : s) {
            // If the character is a digit
            if (isdigit(c)) {
                // Add it to temporary string
                temp += c;
            } else {
                // If temp has a number, convert to int and add to sum
                if (!temp.empty()) {
                    sum += stoi(temp);
                    temp = ""; // Reset temp
                }
            }
        }
        
        // Add last number if string ends with digits
        if (!temp.empty()) {
            sum += stoi(temp);
        }
        
        return sum;
    }
};

// Driver code
int main() {
    Solution obj;
    cout << obj.sumOfNumbers("123xyz") << endl;  // Output: 123
    cout << obj.sumOfNumbers("1xyz23") << endl;  // Output: 24
    return 0;
}

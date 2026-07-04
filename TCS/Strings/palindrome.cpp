#include <bits/stdc++.h>
using namespace std;
int main() {
    string str = "MADAM";
    bool isPalindrome = true;

    int left = 0;
    int right = str.size() - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }

    if (isPalindrome)
        cout << "true";
    else
        cout << "false";
}
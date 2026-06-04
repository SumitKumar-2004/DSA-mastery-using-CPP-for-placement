//Algorithm
//1.We have to clean the string at the end it will be in lower case characters
//2.Make a variable which stores the original string to rev string
//3.Reverse the string either reverse or swap 
//4.Compare the original and reverse string if they are same then its a palindrome string
 

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    string t = "";

    // Clean the string
    for(char ch : s)
    {
        if((ch >= 'a' && ch <= 'z') ||
           (ch >= 'A' && ch <= 'Z') ||
           (ch >= '0' && ch <= '9'))
        {
            t += tolower(ch);
        }
    }

    string rev = t;

    // Reverse rev using swap
    int left = 0;
    int right = rev.size() - 1;

    while(left < right)
    {
        swap(rev[left], rev[right]);
        left++;
        right--;
    }

    return t == rev;
}

int main()
{
    string s = "A man, a plan, a canal: Panama";

    if(isPalindrome(s))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
}
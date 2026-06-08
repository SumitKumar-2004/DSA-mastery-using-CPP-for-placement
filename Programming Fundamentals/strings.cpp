#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
   void accessCharacter(string str)
   {
      for (int i = 0; i < str.length(); i++)
      {
         cout << str[i] << " ";
      }
   }
};
// Solution class containing modifyString function
class Solution1 {
public:
    // Function to modify the string
    string modifyString(string str) {
        // Assign str to a new variable
        string newStr = str;

        // Modify the new string
        newStr[0] = 'H';

        // Return the modified string
        return newStr;
    }
};
int main()
{
   Solution obj;
   Solution1 obj1;
   string str = "Sumit";
   obj.accessCharacter(str);

   string original = "hello";
   string modified = obj1.modifyString(original);

    // Print both strings
    cout << "Original String: " << original << endl;
    cout << "Modified String: " << modified << endl;
   return 0;
}
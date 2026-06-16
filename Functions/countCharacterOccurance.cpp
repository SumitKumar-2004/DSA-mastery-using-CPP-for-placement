#include <bits/stdc++.h>
using namespace std;
int countCharacterOccurances(string str, char ch)
{
   int count = 0;
   for (int i = 0; i < str.size(); i++)
   {
      if (str[i] == ch)
      {
         count++;
      }
   }
   return count;
}
char firstNonRepeatingCharacter(string str)
{
   int freq[256] = {0};
   for (int i = 0; i < str.size(); i++)
   {
      freq[str[i]]++;
   }
   for (int i = 0; i < str.size(); i++)
   {
      if (freq[str[i]] == 1)
      {
         return str[i];
         break;
      }
   }
   return '0';
}
char mostFrequentCharacter(string str)
{
   int freq[256] = {0};
   for (int i = 0; i < str.size(); i++)
   {
      freq[str[i]]++;
   }
   int maxFreq = 0;
   char ans;
   for (int i = 0; i < str.size(); i++)
   {
      if (freq[str[i]] > maxFreq)
      {
         maxFreq = freq[str[i]];
         ans = str[i];
      }
   }
   return ans;
}
void printMostFrequentCharacters(string str)
{
   int freq[256] = {0};

   for (int i = 0; i < str.size(); i++)
   {
      freq[str[i]]++;
   }

   int maxFreq = 0;

   for (int i = 0; i < str.size(); i++)
   {
      if (freq[str[i]] > maxFreq)
      {
         maxFreq = freq[str[i]];
      }
   }

   bool printed[256] = {false};

   for (int i = 0; i < str.size(); i++)
   {
      if (freq[str[i]] == maxFreq &&
          !printed[str[i]])
      {
         cout << str[i] << ",";
         printed[str[i]] = true;
      }
   }
}
void printDuplicatesChars(string str)
{
   int freq[256] = {0};
   for (int i = 0; i < str.size(); i++)
   {
      freq[str[i]]++;
   }
   bool isPrinted[256] = {false};
   for (int i = 0; i < str.size(); i++)
   {
      if (freq[str[i]] > 1)
      {
         cout << str[i] << ",";
         isPrinted[str[i]] = true;
      }
   }
}
bool checkAnagramString(string str1, string str2)
{
   if (str1.size() != str2.size())
   {
      return false;
   }
   sort(str1.begin(), str1.end());
   sort(str2.begin(), str2.end());
   return str1 == str2;
}
int main()
{
   string str = "programming";
   char ch = 'g';
   cout << countCharacterOccurances(str, ch) << endl;
   cout << firstNonRepeatingCharacter(str) << endl;
   cout << mostFrequentCharacter(str) << endl;
   printMostFrequentCharacters(str);
   printDuplicatesChars(str);
   cout<<endl;
   string str1 = "listen", str2 = "silent";
   if (checkAnagramString(str1, str2))
   {
      cout << "Anagram String";
   }
   else
   {
      cout << "Not Anagram String";
   }
}
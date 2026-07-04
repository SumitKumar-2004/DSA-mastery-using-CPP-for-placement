//Count vowels , consonents, whitespaces in a string
#include<bits/stdc++.h>
using namespace std;
int main(){
   string str = "My name is sumit kumar";
   int vowel = 0, consonent = 0, whiteSpaces = 0;
   //convert the whole string to lowrcase
   for(int i=0;i<str.size();i++){
      str[i] = tolower(str[i]);
   }
   //traverse the string
   for (int i = 0; i < str.size();i++){
      if(str[i] == 'a' || str[i] == 'e' ||str[i] == 'i' || str[i] == 'o' ||str[i] == 'u'){
         vowel++;
      }else if(str[i] >= 'a' && str[i] <='z'){
         consonent++;
      }else if(str[i] == ' '){
         whiteSpaces++;
      }
   }
    cout << "Vowels: " << vowel << "\n";
    cout << "Consonants: " << consonent << "\n";
    cout << "White Spaces: " << whiteSpaces << "\n";
   
}
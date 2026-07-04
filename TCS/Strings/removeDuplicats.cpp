//Remove duplicates from a string
#include<bits/stdc++.h>
using namespace std;
int main(){
   string s = "sumit kumar";
   string res= "";
   int freq[256] = {0};
   for(char ch : s){
      freq[ch]++;
      if(freq[ch] == 1)
            res += ch;
   }
   cout<<res;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
   //in this string we have to find how many balloons are made 
   string text = "loonbalxballpoon";
   int freq[256] = {0};

   for(char ch : text){
      freq[ch]++;
   }

   int ans = min({freq['b'],freq['a'],freq['l']/2,freq['o']/2,freq['n']});

   cout<<"Maximum number of ballons : "<<ans;

}
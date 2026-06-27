//Leetcode : 268
#include<bits/stdc++.h>
using namespace std;
int main(){
   vector<int> arr = {3,0,1};
   int ans = arr.size();
   for (int i = 0; i < arr.size(); i++)
   {
      ans ^= i;
      ans ^= arr[i];
   }
   cout<<ans;
}
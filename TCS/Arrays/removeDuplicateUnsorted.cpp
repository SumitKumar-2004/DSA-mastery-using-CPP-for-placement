#include<bits/stdc++.h>
using namespace std;
int main(){
   vector<int> arr = {2,4,1,5,3,2,1,4,3,2,5,7,4};
   unordered_set<int> set;
   for(auto it:arr){
      if(set.find(it) == set.end()){
         set.insert(it);
         cout<<it<<" ";
      }
   }
}
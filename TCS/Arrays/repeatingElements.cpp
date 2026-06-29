#include<bits/stdc++.h>
using namespace std;
void findRepeatingElement(vector<int> &arr){
   //use hashmap to store freq of elements and store those whose freq > 1
   unordered_map<int,int> mpp;
   for(auto it:arr){
      mpp[it]++;
   }
   cout<<"The repeating elements in the array are : ";
   for(auto it : mpp){
      if(it.second > 1){
         cout<<it.first<<" ";
      }
   }
}

int main(){
   vector<int> arr = {2,4,3,2,1,5,3,2,1};
   findRepeatingElement(arr);
   return 0;
}
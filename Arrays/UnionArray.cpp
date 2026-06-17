//it return all unique element from both arrays
#include<bits/stdc++.h>
using namespace std;
vector<int> unionArray(vector<int> &arr1,vector<int> &arr2,int n,int m){
   int i = 0;
   int j = 0;
   vector<int> ans;
   while(i < n && j < m){
      if(arr1[i] <= arr2[j]){
         if(ans.empty() || ans.back() != arr1[i]){
            ans.push_back(arr1[i]);
         }
         i++;
      }else {
         if(ans.empty() || ans.back() != arr2[j]){
            ans.push_back(arr2[j]);
         }
         j++;
      }
   }  
   //Remaining arr1 element
   while(i < n){
      if(ans.empty() || ans.back() != arr1[i]){
         ans.push_back(arr1[i]);
      }
      i++;
   }
   //Remaining arr2 element
   while(j < m){
      if(ans.empty() || ans.back() != arr2[j]){
         ans.push_back(arr2[j]);
      }
      j++;
   }
   return ans;
}
int main(){
   vector<int> arr1 = {1,1,2,3,4};
   vector<int> arr2 = {2,3,5};
   int n = arr1.size();
   int m = arr2.size();
   vector<int> res = unionArray(arr1,arr2,n,m);
   for(auto it : res){
      cout<<it<<" ";
   }
}
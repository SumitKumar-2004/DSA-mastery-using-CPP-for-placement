#include<bits/stdc++.h>
using namespace std;
vector<int> unionArray(vector<int> &arr1,vector<int> &arr2,int n,int m){
   set<int> st;
   for (int i = 0; i < n; i++)
   {
      st.insert(arr1[i]);
   }
   for (int i = 0; i < m; i++)
   {
      st.insert(arr2[i]);
   }
   vector<int> unionVector(st.begin(),st.end());
   return unionVector;
   
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
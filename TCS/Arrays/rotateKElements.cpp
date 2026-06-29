#include<bits/stdc++.h>
using namespace std;
//left rotate by k elements
/*
int main(){
   vector<int> arr = {1, 2, 3, 4, 5};
   int k = 2;
   int n = arr.size();
   //first reverse the k elements of array
   reverse(arr.begin(),arr.begin() + k);
   //reverse the remainaing elements
   reverse(arr.begin()+k,arr.end());
   //reverse the whole array
   reverse(arr.begin(),arr.end());
   for(auto it:arr){
      cout<<it<<" ";
   }
}
*/
// right rotate by k elements
int main(){
   vector<int> arr = {1, 2, 3, 4, 5};
   int k = 2;
   int n = arr.size();
   //first reverse the whole arr
   reverse(arr.begin(),arr.end());
   //reverse the k elements
   reverse(arr.begin(),arr.begin() + k);
   //reverse the remaining elements
   reverse(arr.begin()+k,arr.end());
   for(auto it:arr){
      cout<<it<<" ";
   }  
}
#include<bits/stdc++.h>
using namespace std;
void rotate(vector<int> &arr,int k){
   int n = arr.size();
   //this help in preventing unnecessary reversing of arrays 
   k = k % n;
   
   //first we have to reverse the whole array
   reverse(arr.begin(),arr.end());

   //then we have to reverse the first k elements of array
   reverse(arr.begin(),arr.begin() + k);

   //then we have to revese the remaiing array after the kth element
   reverse(arr.begin()+k,arr.end());
}
int main(){
   vector<int> arr = {1,2,3,4,5,6,7};
   int k = 3;
   rotate(arr,k);
   for(auto it:arr){
      cout<<it<<" ";
   }
}
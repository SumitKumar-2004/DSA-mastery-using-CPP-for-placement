//Search insert position 
//TC : O(logn) ,SC:O(1)
#include<bits/stdc++.h>
using namespace std;
int SearchInsertPos(vector<int>&arr,int x){
   int low = 0;
   int high = arr.size() - 1;
   int ans = arr.size();
   while(low <= high){
      int mid = low + (high - low) / 2;
      if(arr[mid] >= x){
         ans = mid;
         high = mid - 1;
      }else{
         low = mid+1;
      }
   }
   return ans;
}

int main(){
   vector<int> arr = {1,2,4,7};
   int x = 6;// we insert it at 3 idx
   cout<<SearchInsertPos(arr,x);
}
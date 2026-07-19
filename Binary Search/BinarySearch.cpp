#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> & nums,int target){
   int n = nums.size();
   int low = 0;
   int high = n - 1;
   while(low <= high){
      int mid = low + (high - low) / 2;
      if(nums[mid] == target){
         return mid;
      }else if(target > nums[mid]){
         low = mid + 1;
      }else{
         high = mid - 1;
      }
   }
   return -1;
}
int main(){
   vector<int> nums = {3, 4, 6, 7, 9, 12, 16, 17};
   int target = 9;
   cout<<binarySearch(nums,target);
}
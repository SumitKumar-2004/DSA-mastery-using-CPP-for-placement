//Note: in this we use two pointers beacuse the array is sorted but in two sum leetcode question 1 the array is not sorted so we have to use unordered_map there these give optimal solution for these questions
#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
   int left = 0;
   int right = nums.size() - 1;
   while(left < right){
      int sum = nums[left] + nums[right];
      if(sum == target){
         return {left + 1,right+1};
      }else if(sum < target){
         left++;
      }else{
         right--;
      }
   }
   return {};     
}

int main(){
   vector<int> nums = {2,7,11,15};
   int target = 18;
   vector<int> ans = twoSum(nums,target);
   cout<<ans[0]<<" "<<ans[1];
   return 0;
}
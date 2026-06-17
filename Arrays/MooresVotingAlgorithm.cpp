#include<bits/stdc++.h>
using namespace std;
int majority(vector<int> nums){
   int count = 0;
   int candidate = -1;
   for(int i=0;i<nums.size();i++){
      if(count == 0){
         count = 1;
         candidate = nums[i];
      }else if(candidate == nums[i]){
         count++;
      }else{
         count--;
      }
   }
   return candidate;
}
int main(){
   vector<int> nums = {2, 2, 3, 3, 1, 2, 2};
   cout<<majority(nums);
}
// Moore's Voting Algorithm
// Trigger Word: "Majority Element (> n/2)"
// Think of an election:
// candidate = current leader
// count     = vote difference
// If the same candidate appears:
//      count++
// If a different candidate appears:
//      count--
// When count becomes 0:
//      previous votes are cancelled out
//      choose a new candidate
// The majority element can never be completely cancelled
// because it appears more than n/2 times.


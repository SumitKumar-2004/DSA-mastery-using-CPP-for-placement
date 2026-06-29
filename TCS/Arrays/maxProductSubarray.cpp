// Maximum Product Subarray
// We keep track of both the maximum and minimum product because
// a negative number can turn the minimum product into the maximum product.

#include<bits/stdc++.h>
using namespace std;
int maxProd(vector<int> &nums){
   // Initialize answer, maximum product and minimum product
   // with the first element of the array.
   int ans = nums[0];
   int maxProd = nums[0];
   int minProd = nums[0];
   // Traverse the array from the second element
   for(int i = 1; i < nums.size(); i++){
      // Store the current element
      int curr = nums[i];
      // If the current element is negative,
      // swap the maximum and minimum products
      // because multiplying by a negative changes their roles.
      if(curr < 0){
         swap(maxProd, minProd);
      }
      // Calculate the maximum product ending at the current index.
      // Either start a new subarray with curr
      // or extend the previous maximum product.
      maxProd = max(curr, maxProd * curr);
      // Calculate the minimum product ending at the current index.
      // Either start a new subarray with curr
      // or extend the previous minimum product.
      minProd = min(curr, minProd * curr);
      // Update the overall maximum product found so far.
      ans = max(ans, maxProd);
   }
   // Return the maximum product of any subarray.
   return ans;
}
int main(){
   vector<int> nums = {2,3,-2,4};
   cout << maxProd(nums);
   return 0;
}
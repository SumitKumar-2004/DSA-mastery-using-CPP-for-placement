#include<bits/stdc++.h>
using namespace std;
int main(){
   int arr[] = {5,4,3,2,1};
   int n = sizeof(arr)/sizeof(arr[0]);
   int left = 0;
   int right = n - 1;
   while(left < right){
      swap(arr[left],arr[right]);
      left++;
      right--;
   }
   for(auto it : arr){
      cout<<it<<" ";
   }
}
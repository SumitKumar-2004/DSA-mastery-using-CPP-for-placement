//Upper bound Index : arr[i] > x
// n = 5 arr[] = {1,2,3,4,5} x = 3 , output : 2
#include<bits/stdc++.h>
using namespace std;
int lowerBound(int arr[],int x,int n){
   int low = 0;
   int high = n - 1;
   int ans = n;
  while(low <= high){
     int mid = low + (high - low) / 2;
     if(arr[mid] > x){
        ans = mid;
         high = mid - 1;
      }else{
          low = mid + 1;
      }
   }
   return ans;
}
int main(){
   int n = 5;
   int arr[] = {3,5,8,15,19};
   int x = 8;
   cout<<lowerBound(arr,x,n);
}

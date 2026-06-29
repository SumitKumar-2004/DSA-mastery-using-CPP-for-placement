//in this we increase the first half and decrease the second half
#include<bits/stdc++.h>
using namespace std;
int main(){
   vector<int> arr = {4, 2 ,8 ,6 ,15, 5, 9, 20};
   int n = arr.size();
   sort(arr.begin(),arr.end());
   reverse(arr.begin() + n /2 , arr.end());
   for(auto it : arr){
      cout<<it<<" ";
   }
}
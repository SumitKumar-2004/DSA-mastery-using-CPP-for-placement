#include<bits/stdc++.h>
using namespace std;
int search(vector<int> &arr,int n,int num){
   for (int i = 0; i < n; i++)
   {
      if(arr[i] == num){
         return i;
      }
   }
   return -1; 
   
}

int main(){
   vector<int> arr = {10,20,30,40,50};
   int num = 300;
   int n = arr.size();
   int ans = search(arr,n,num);
   cout<<ans;
}
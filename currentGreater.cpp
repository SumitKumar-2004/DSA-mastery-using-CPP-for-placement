#include <bits/stdc++.h>
using namespace std;
int main()
{
   vector<int> arr = {5 ,7 ,4 ,8 ,2 ,9};
   int currMax = INT_MIN,count = 0;
   for(int i=0;i<arr.size();i++){
      if(arr[i] > currMax){
         count++;
         currMax = arr[i];
      }
   }
   cout<<count;
}
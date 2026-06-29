#include<bits/stdc++.h>
using namespace std;
int main(){
   vector<int> arr = {1,2,3,4,5};
   double avg = 0,sum = 0;
   for(int i=0;i<arr.size();i++){
      sum += arr[i];
   }
   avg  = sum / arr.size();
   cout<<avg;
}
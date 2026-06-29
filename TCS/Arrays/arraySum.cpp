#include<bits/stdc++.h>
using namespace std;
int main(){
   vector<int> arr = {1,3,2,5,6,4};
   int sum = 0;
   for(auto it:arr){
      sum += it;
   }
   cout<<sum;
}
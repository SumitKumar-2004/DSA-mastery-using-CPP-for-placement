#include<bits/stdc++.h>
using namespace std;
int main(){
   vector<int> prices = {7,1,5,6,3,4};
   int n = prices.size();
   int profit = 0;
   int mini = prices[0];
   for (int i = 0; i < n; i++)
   {
      int cost = prices[i] - mini;
      profit = max(profit,cost);
      mini = min(mini,prices[i]);
   }

   cout<<profit;
}
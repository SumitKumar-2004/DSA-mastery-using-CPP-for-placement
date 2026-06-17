#include<bits/stdc++.h>
using namespace std;

int main()
{
   // Stock prices on different days
   vector<int> prices = {7,1,5,6,3,4};

   // Total number of days
   int n = prices.size();

   // Stores maximum profit found so far
   int profit = 0;

   // Stores minimum stock price seen so far
   // Initially first day's price
   int mini = prices[0];

   // Traverse all days
   for (int i = 0; i < n; i++)
   {
      // Profit if we buy at minimum price
      // and sell on current day
      int cost = prices[i] - mini;

      // Update maximum profit if current profit is larger
      profit = max(profit, cost);

      // Update minimum price seen so far
      mini = min(mini, prices[i]);
   }

   // Print maximum profit
   cout << profit;
}
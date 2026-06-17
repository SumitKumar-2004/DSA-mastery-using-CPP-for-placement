#include <bits/stdc++.h>
using namespace std;
int majorityElement(vector<int> &arr)
{

   for (int i = 0; i < arr.size(); i++)
   {
      int count = 0;
      for (int j = 0; j < arr.size(); j++)
      {
         if (arr[j] == arr[i])
         {
            count++;
         }
         if (count > arr.size() / 2)
         {
            return arr[i];
         }
      }
   }
}
int betterApporach(vector<int> &arr)
{
   int n = arr.size();
   map<int, int> mpp;
   for (int i = 0; i < n; i++)
   {
      mpp[arr[i]]++;
   }
   for (auto it : mpp)
   {
      if (it.second > (n / 2))
      {
         return it.first;
      }
   }
   return -1;
}
//When u hear about majority then moories voting algorithm goes here.
//In this simply think of a voting condition in which if a candidate has more votes its count increase and if the opponenet has vote the count of candidate is decreases so at the end we found the majority votes candidate 
int morreVotingAlgorithm(vector<int> &arr)
{
   int count = 0;
   int n = arr.size();
   int candidate = -1;
   for (int i = 0; i < n; i++)
   {
      if (count == 0)
      {
         count = 1;
         candidate = arr[i];
      }
      else if (arr[i] == candidate)
      {
         count++;
      }
      else
      {
         count--;
      }
   }
   return candidate;
}
int main()
{
   vector<int> arr = {2, 2, 3, 3, 1, 2, 2};
   int n = arr.size();
   // int ans = majorityElement(arr);
   // int ans = betterApporach(arr);
   int ans = morreVotingAlgorithm(arr);
   cout << ans;
}

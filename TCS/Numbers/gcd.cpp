#include <bits/stdc++.h>
using namespace std;
int gcdBrute(int n1, int n2)
{
   int ans = 1;
   for (int i = 1; i <= min(n1, n2); i++)
   {
      if (n1 % i == 0 && n2 % i == 0)
      {
         ans = i;
      }
   }
   return ans;
}
//Euclidean Algorithm TC:O(log(min(a,b)))
int gcdOptimal(int n1,int n2){
   while(n2 != 0){
      int temp = n2;
      n2 = n1 % n2;
      n1 = temp;
   }
   return n1;
}
int main()
{
   int n1 = 12, n2 = 18;
   // cout<<gcdBrute(n1,n2);
   cout<<gcdOptimal(n1,n2);
}
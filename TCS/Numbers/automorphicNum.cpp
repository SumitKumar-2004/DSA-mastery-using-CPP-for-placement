// 76*76 = 5776 last two digits match
#include <bits/stdc++.h>
using namespace std;
bool isAutomorphic(int n)
{
   int square = n * n;
   while (n > 0)
   {
      if (n % 10 != square % 10)
      {
         return false;
      }
      n /= 10;
      square /= 10;
   }
   return true;
}
int main()
{
   int n = 76;
   if (isAutomorphic(n))
   {
      cout<<"Automorphic number";
   }else{
      cout<<"Not a automorphic number";
   }
   
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
   int arr[3][3] = {
      {11, 2, 3}, 
      {4, 15, 6,},
      {7, 8, 9}
   };
   int primaryDiagonalSum = 0;
   for (int i = 0; i < 3; i++)
   {
         primaryDiagonalSum += arr[i][i];
   }
   cout<<"Primary diagonal sum is : "<<primaryDiagonalSum;
   int secondaryDiagonalSum = 0;
   int n= 3;
   for (int i = 0; i < 3; i++)
   {
      secondaryDiagonalSum += arr[i][n - i - 1];
   }
   cout<<"\nSecondary diagonal sum is : "<<secondaryDiagonalSum;

   
   return 0;
}
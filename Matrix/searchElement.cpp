#include <bits/stdc++.h>
using namespace std;
int main()
{
   int arr[3][3] = {
      {1, 2, 3}, 
      {4, 5, 6,},
      {7, 8, 9}
   };
   int target = 8;
   bool found = false;
   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         if(arr[i][j] == target){
            found = true;
            cout<<"["<<i<<"]["<<j<<"]";
         }
      }
   }
   if(!found){
      cout<<"Not found!";
   }
   return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
   int  arr[] = {10, 2, 4, 7, 7, 5};
   int smallest = INT_MAX,secondSmall = INT_MAX;
   for (int i = 0; i < 6; i++)
   {
      if(arr[i] < smallest){
         secondSmall = smallest;
         smallest = arr[i];
      }else if(arr[i] < secondSmall && arr[i] != smallest){
         secondSmall = arr[i];
      }
   }
   cout<<"Smallest : "<<smallest<<"\nSecond Smallest : "<<secondSmall;
}
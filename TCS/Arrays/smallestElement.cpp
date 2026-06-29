#include<bits/stdc++.h>
using namespace std;
int main(){
   int  arr[] = {2, 5, 15, 3, 10};
   int smallest = arr[0];
   for (int i = 0; i < 5; i++)
   {
      if(smallest > arr[i]){
         smallest = arr[i];
      }
   }
   cout<<"Smallest : "<<smallest;
}
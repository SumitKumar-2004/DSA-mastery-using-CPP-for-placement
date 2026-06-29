#include<bits/stdc++.h>
using namespace std;
int main(){
   int  arr[] = {2, 5, 15, 300, 10};
   int largest = arr[0];
   for (int i = 0; i < 5; i++)
   {
      if(largest < arr[i]){
         largest = arr[i];
      }
   }
   cout<<"Smallest : "<<largest;
}
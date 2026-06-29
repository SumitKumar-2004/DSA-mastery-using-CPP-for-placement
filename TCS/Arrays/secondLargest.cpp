#include<bits/stdc++.h>
using namespace std;
int main(){
   int arr[] = {20,10,40,20,30,50,35,90,50,25};
   int n = sizeof(arr)/sizeof(arr[0]);
   int largest = INT_MIN,secondLargest = INT_MIN;
   for(int i=0;i<n;i++){
      if(arr[i] > largest){
         secondLargest = largest;
         largest = arr[i];
      }else if(arr[i] > secondLargest && arr[i] != largest){
         secondLargest = arr[i];
      }
   }
   cout<<"Largest : "<<largest<<"\nSecond Largest : "<<secondLargest;
}
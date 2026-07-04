#include<bits/stdc++.h>
using namespace std;
int main(){
   string str = "Sumit Kumar";
   int left = 0,right = str.length() - 1;
   while(left < right){
      swap(str[left],str[right]);
      left++;
      right--;
   }
   cout<<str;
}
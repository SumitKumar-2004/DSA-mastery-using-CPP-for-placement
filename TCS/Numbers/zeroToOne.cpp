//convert all zeros to ones : 2004 -> 2114
#include<bits/stdc++.h>
using namespace std;

int bruteForce(int n){
   string num = to_string(n);
   for(int i=0;i<num.size();i++){
      if(num[i] == '0'){
         num[i] = '1';
      }
   }
   return stoi(num);
}
int optimal(int n){
   //special case
   if(n == 0){
      return 1;
   }
   int ans = 0;
   int place = 1;
   while(n > 0){
      int digit = n % 10;
      //replace 0 with 1
      if(digit == 0){
         digit = 1;
      }
      //build new number
      ans = ans + digit * place;
      place = place * 10;
      n /= 10;
   }
   return ans;
}
int main(){
   int n = 2004;
   cout<<"Brute force ans : "<<bruteForce(n)<<endl;
   cout<<"Optimal approach ans : "<<optimal(n);

}
#include<bits/stdc++.h>
using namespace std;
int main(){
   int decimal = 12;
   string octal = "";
   while(decimal > 0){
      int rem = decimal % 8;
      octal += rem + '0';
      decimal /= 8;
   }
   reverse(octal.begin(),octal.end());
   cout<<octal;
}
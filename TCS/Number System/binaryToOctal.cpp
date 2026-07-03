#include<bits/stdc++.h>
using namespace std;
int convertToDecimal(string binary){
   return stoi(binary,0,8);
}
int main(){
   string binary = "1111";
   cout<<convertToDecimal(binary);
}
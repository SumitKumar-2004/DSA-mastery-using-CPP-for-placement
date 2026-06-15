#include<iostream>
using namespace std;
int main(){
   int year = 2024;
   if(year % 400 == 0){
      cout<<"Leap year";
   }else if(year % 4 == 0 && year % 100 != 0){
      cout<<"Leap year";
   }else{
      cout<<"Not a leap year";
   }
}
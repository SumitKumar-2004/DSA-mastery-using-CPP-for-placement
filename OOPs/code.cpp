//Car Eg
#include<bits/stdc++.h>
using namespace std;
class Car{
   public:
   string brand;
   string color;

   void start(){
      cout<<brand<<" is starting."<<endl;
   }

   void stop(){
      cout<<brand<<" is stopped."<<endl;
   }
};
int main(){
   Car car1;
   car1.brand = "BMW";
   car1.color = "Red";

   car1.start();
   car1.stop();
   return 0;
}
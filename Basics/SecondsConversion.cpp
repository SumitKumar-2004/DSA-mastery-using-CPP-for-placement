//Seconds to Hours Minutes Seconds
#include<bits/stdc++.h>
using namespace std;
int main(){
   int seconds;
   cout<<"Enter seconds : ";
   cin>>seconds;

   int hours = seconds / 3600;
   int remaining = seconds % 3600;
   int minutes = remaining / 60;
   int second = remaining % 60;
   cout<<hours<<": HH "<<minutes<<": MM "<<second<<": SS ";
}

#include<bits/stdc++.h>
using namespace std;
int main(){
   string gmail = "sumit123@gmail.com";
   
   int atPos = gmail.find('@');
   int dotPos = gmail.find('.');

   string username = gmail.substr(0,atPos);
   string company = gmail.substr(atPos+1,dotPos-atPos-1);
   string extension = gmail.substr(dotPos+1);

   cout<<"Username : "<<username<<"\nCompany : "<<company<<"\nExtension : "<<extension;
}
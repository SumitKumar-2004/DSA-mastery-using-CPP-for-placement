#include <bits/stdc++.h>
using namespace std;
int main()
{
   int num, count = 0;
   cout << "Enter a number : ";
   cin>>num;
   while (num > 0)
   {
      count++;
      num /= 10;
   }
   cout << "The count of digit is : " << count;
}
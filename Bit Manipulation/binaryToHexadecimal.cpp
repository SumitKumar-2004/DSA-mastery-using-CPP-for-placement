#include <bits/stdc++.h>
using namespace std;
int main()
{
   string binary = "11111";
   int decimal = 0;
   // Binary to decimal
   for (int i = 0; i < binary.size(); i++)
   {
      int bit = binary[i] - '0';
      decimal = decimal * 2 + bit;
   }
   // Decimal to hexadecimal
   string hexaDecimal = "";
   while (decimal > 0)
   {
      int rem = decimal % 16;
      if (rem < 10)
      {
         hexaDecimal += rem + '0';
      }
      else
      {
         hexaDecimal += (rem - 10) + 'A';
      }
      decimal /= 16;
   }
   reverse(hexaDecimal.begin(), hexaDecimal.end());
   cout << hexaDecimal;
}
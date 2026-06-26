// Check ith bit of the value n it it is 0 then it is not set if not 0 then it is set
#include <bits/stdc++.h>
using namespace std;
// int main()
// {
//    int n = 13, ith = 1;

//    // first : convert it to binary
//    string binary = "";
//    while (n > 0)
//    {
//       int rem = n % 2;
//       binary += rem + '0';
//       n /= 2;
//    }
//    reverse(binary.begin(), binary.end());
//    cout << binary << endl;
//    int index = binary.size() - 1 - ith;

//    if (binary[index] == '1')
//    {
//       cout << "Set";
//    }
//    else
//    {
//       cout << "Not Set";
//    }
// }

//short way using AND and operators shifting 
int main()
{
   int n = 13;
   int ith = 0;

   if (n & (1 << ith))
   {
      cout << "Set";
   }
   else
   {
      cout << "Not Set";
   }
}
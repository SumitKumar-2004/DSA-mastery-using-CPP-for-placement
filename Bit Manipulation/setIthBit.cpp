// Set the ith bit if it is already 1 leave it unchange otherwise set it to 1
#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n = 9;//1001
   int ith = 1;
   n = (n | (1 << ith));//1011
   cout << n;//1011 -> 11
}
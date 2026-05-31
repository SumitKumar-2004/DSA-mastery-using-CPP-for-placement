//3. Write a program to print the Fibonacci series up to N terms.

#include <iostream>
using namespace std;
// int fib(int n)
// {
//    if (n == 0)
//    {
//       return 0;
//    }

//    else if (n == 1)
//    {
//       return 1;
//    }
//    return fib(n - 1) + fib(n - 2);
// }
// int main()
// {
//    int n = 10;
//    int result = fib(n);
//    cout << result;
// }

int main()
{
   int n = 6, a = 0, b = 1;
   cout << "Fibonacci series upto " << n << " terms : ";
   for (int i = 0; i < n; i++)
   {
      cout << a << " ";
      int next = a + b;
      a = b;
      b = next;
   }
   return 0;
}

// Time complexity = o(n)
// Space complexity = o(1)


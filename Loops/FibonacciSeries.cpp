#include <iostream>
using namespace std;
// Twist 1: Nth Fibonacci Number
int nthFibonacci(int n)
{
    int a = 0, b = 1;
    for (int i = 1; i < n; i++)
    {
        int c = a + b;
        a = b;
        b = c;
    }
    return a;
}

// Twist 2: Check if a number belongs to Fibonacci series
bool isFibonacci(int target)
{
    int a = 0, b = 1;
    while (a < target)
    {
        int c = a + b;
        a = b;
        b = c;
    }
    return a == target;
}

// Twist 3: Print Fibonacci numbers less than N
void printLessThanN(int n)
{
    int a = 0, b = 1;
    while (a < n)
    {
        cout << a << " ";
        int c = a + b;
        a = b;
        b = c;
    }
    cout << endl;
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "\nNth Fibonacci Number: ";
    cout << nthFibonacci(n) << endl;
    cout << "\nBelongs to Fibonacci Series: ";
    if (isFibonacci(n))
        cout << "Yes";
    else
        cout << "No";
    cout << "\n\nFibonacci Numbers Less Than " << n << ":\n";
    printLessThanN(n);
    return 0;
}
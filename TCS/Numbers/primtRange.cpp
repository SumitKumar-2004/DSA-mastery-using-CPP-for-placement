#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if(n <= 1)
        return false;

    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int min = 10;
    int max = 30;

    for(int i = min; i <= max; i++)
    {
        if(isPrime(i))
            cout << i << " ";
    }
}
//formula : nPr = n! / (n-r)!
#include<bits/stdc++.h>
using namespace std;

// Function to calculate factorial
int factorial(int n){

    int fact = 1;

    for(int i = 1; i <= n; i++){
        fact *= i;
    }

    return fact;
}

int main(){

    int n = 5;
    int r = 2;

    int ans = factorial(n) / factorial(n - r);

    cout << "Permutation = " << ans;

    return 0;
}
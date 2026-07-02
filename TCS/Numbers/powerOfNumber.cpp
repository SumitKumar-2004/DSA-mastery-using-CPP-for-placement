// Find x raised to the power n using a loop.

#include<bits/stdc++.h>
using namespace std;

int main(){

    int x = 5;
    int n = 3;

    int ans = 1;

    // Multiply x, n times
    for(int i = 0; i < n; i++){
        ans = ans * x;
    }

    cout << x << " raised to the power " << n << " is " << ans;

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

// Function to check prime
bool isPrime(int n){

    if(n <= 1){
        return false;
    }

    for(int i = 2; i * i <= n; i++){

        if(n % i == 0){
            return false;
        }
    }

    return true;
}

bool canBeExpressed(int n){

    for(int i = 2; i <= n; i++){

        // Check first number
        if(isPrime(i)){

            int second = n - i;

            // Check second number
            if(isPrime(second)){
                return true;
            }
        }
    }

    return false;
}

int main(){

    int n = 74;//71 + 3

    if(canBeExpressed(n)){
        cout << "True";
    }
    else{
        cout << "False";
    }

    return 0;
}
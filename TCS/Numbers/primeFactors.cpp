// Print all Prime Factors of a Number
// Brute Force and Optimal Approach

#include<bits/stdc++.h>
using namespace std;

//----------------------------------------------------
// Function to check whether a number is prime
//----------------------------------------------------
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

//----------------------------------------------------
// Brute Force Approach
// Time Complexity : O(n * √n)
// Prints only UNIQUE prime factors
//----------------------------------------------------
void bruteForce(int n){

    cout << "Brute Force : ";

    for(int i = 2; i <= n; i++){

        // Check whether i is a factor
        if(n % i == 0){

            // Check whether the factor is prime
            if(isPrime(i)){
                cout << i << " ";
            }
        }
    }

    cout << endl;
}

//----------------------------------------------------
// Optimal Approach
// Time Complexity : O(√n)
// Prints COMPLETE prime factorization
//----------------------------------------------------
void optimal(int n){

    cout << "Optimal : ";

    for(int i = 2; i * i <= n; i++){

        // Divide by i until it is no longer a factor
        while(n % i == 0){

            cout << i << " ";

            n /= i;
        }
    }

    // If n is still greater than 1,
    // then it is also a prime factor.
    if(n > 1){
        cout << n;
    }

    cout << endl;
}

int main(){

    int n = 60;

    bruteForce(n);

    optimal(n);

    return 0;
}
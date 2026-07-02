#include<bits/stdc++.h>
using namespace std;

// Euclidean Algorithm
int gcd(int a, int b){

    while(b != 0){

        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

// Brute Force
int lcmBrute(int a, int b){

    int maxNum = max(a, b);

    while(true){

        if(maxNum % a == 0 && maxNum % b == 0){
            return maxNum;
        }

        maxNum++;
    }
}

// Optimal
int lcmOptimal(int a, int b){

    return (a * b) / gcd(a, b);
}

int main(){

    int a = 12;
    int b = 18;

    cout << "Brute Force LCM : " << lcmBrute(a, b) << endl;

    cout << "Optimal LCM : " << lcmOptimal(a, b);

    return 0;
}
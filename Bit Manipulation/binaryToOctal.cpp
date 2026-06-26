#include<bits/stdc++.h>
using namespace std;

int main(){

    string binary = "101011";

    // Step 1 : Binary -> Decimal
    int decimal = 0;

    for(int i = 0; i < binary.size(); i++){

        int bit = binary[i] - '0';

        decimal = decimal * 2 + bit;
    }

    // Step 2 : Decimal -> Octal
    string octal = "";

    while(decimal > 0){

        int rem = decimal % 8;

        octal += rem + '0';

        decimal /= 8;
    }

    reverse(octal.begin(), octal.end());

    cout << octal;
}
#include<bits/stdc++.h>
using namespace std;

string binaryToHex(string binary){

    // Step 1: Binary -> Decimal
    int decimal = stoi(binary, 0, 2);

    // Step 2: Decimal -> Hexadecimal
    stringstream ss;
    ss << uppercase << hex << decimal;

    return ss.str();
}

int main(){

    string binary = "11111";

    cout << binaryToHex(binary);

    return 0;
}
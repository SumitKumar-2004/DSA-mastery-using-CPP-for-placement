#include<bits/stdc++.h>
using namespace std;
int main(){
    string binary = "1110";
    int decimal = 0;
    for(int i = 0; i < binary.size(); i++){
        int bit = binary[i] - '0';
        decimal = decimal * 2 + bit;
    }
    cout << decimal;
}
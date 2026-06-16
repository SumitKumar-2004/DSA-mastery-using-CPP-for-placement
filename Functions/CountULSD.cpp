#include <bits/stdc++.h>
using namespace std;
void countUpperLowerSpecialDigits(string str)
{
    int upperCount = 0;
    int lowerCount = 0;
    int specialCount = 0;
    int digits = 0;

    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            upperCount++;

        else if(str[i] >= 'a' && str[i] <= 'z')
            lowerCount++;

        else if(str[i] >= '0' && str[i] <= '9')
            digits++;

        else
            specialCount++;
    }

    cout << "Uppercase : " << upperCount << endl;
    cout << "Lowercase : " << lowerCount << endl;
    cout << "Digits    : " << digits << endl;
    cout << "Special   : " << specialCount << endl;
}
int main()
{
    string str = "sumit2004@gmail.com";
    countUpperLowerSpecialDigits(str);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1 = "Apple";
    string goal = "ppleA";

    if (s1.length() != goal.length())
    {
        cout << "Not Possible";
        return 0;
    }

    string doubleString = s1 + s1;

    if (doubleString.find(goal) != string::npos)
    {
        cout << "Possible";
    }
    else
    {
        cout << "Not Possible";
    }

    return 0;
}
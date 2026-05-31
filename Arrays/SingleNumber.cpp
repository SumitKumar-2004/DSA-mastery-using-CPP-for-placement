#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {4, 1, 2, 1, 2};

    for (int i = 0; i < arr.size(); i++)
    {
        int num = arr[i];
        int count = 0;

        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[j] == num)
            {
                count++;
            }
        }

        // Single number found
        if (count == 1)
        {
            cout << num;
            return 0;
        }
    }

    cout << -1;
}
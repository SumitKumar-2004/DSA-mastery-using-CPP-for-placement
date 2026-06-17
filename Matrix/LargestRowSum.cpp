#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {4, 15, 6},
        {7, 8, 9}
    };

    int maxSum = 0;
    int index = -1;

    for (int i = 0; i < 3; i++)
    {
        int sum = 0;

        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }

        cout << "Row " << i + 1 << " Sum = " << sum << endl;

        if (sum > maxSum)
        {
            maxSum = sum;
            index = i;
        }
    }

    cout << "Max Row Sum = " << maxSum << endl;
    cout << "Row Index = " << index + 1 << endl;

    return 0;
}
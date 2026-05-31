#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &arr)
{
    int m = arr.size();    
    int n = arr[0].size();

    int top = 0, left = 0;
    int right = n - 1, bottom = m - 1;

    vector<int> ans;

    while (top <= bottom && left <= right)
    {
        // left -> right
        for (int i = left; i <= right; i++)
        {
            ans.push_back(arr[top][i]);
        }
        top++;

        // top -> bottom
        for (int i = top; i <= bottom; i++)
        {
            ans.push_back(arr[i][right]);
        }
        right--;

        // right -> left
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                ans.push_back(arr[bottom][i]);
            }
            bottom--;
        }

        // bottom -> top
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                ans.push_back(arr[i][left]);
            }
            left++;
        }
    }

    return ans;
}

int main()
{
    vector<vector<int>> arr = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    vector<int> result = spiralOrder(arr);

    for (int val : result)
    {
        cout << val << " ";
    }
}
#include <bits/stdc++.h>
using namespace std;

int firstOccur(vector<int> arr, int target)
{
    int low = 0;
    int high = arr.size() - 1;
    int ans = -1;
    
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
        {
            ans = mid;
            high = mid - 1;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return ans;
}

int lastOccur(vector<int> arr, int target)
{
    int low = 0;
    int high = arr.size() - 1;
    int ans = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
        {
            ans = mid;
            low = mid + 1;   // ✅ Correct
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return ans;
}

vector<int> searchRange(vector<int> &arr, int target)
{
    return {firstOccur(arr, target), lastOccur(arr, target)};
}

int main()
{
    vector<int> arr = {5, 7, 7, 8, 8, 10};
    int target = 8;

    vector<int> ans = searchRange(arr, target);

    cout << ans[0] << " " << ans[1];
}
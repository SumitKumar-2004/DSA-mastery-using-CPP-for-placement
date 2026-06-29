#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {6, 7, 9, 5, 3, 10};
    int target = 10;

    int n = sizeof(arr) / sizeof(arr[0]);

    int ans = -1;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == target)
        {
            ans = i;
            break;
        }
    }

    if(ans == -1)
        cout << "Element not found";
    else
        cout << "Element found at index " << ans;
}
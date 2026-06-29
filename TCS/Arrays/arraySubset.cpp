#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr1[] = {1,3,4,5,2};
    int arr2[] = {2,4,3,1,7,5,15};

    int m = sizeof(arr1)/sizeof(arr1[0]);
    int n = sizeof(arr2)/sizeof(arr2[0]);

    unordered_set<int> st;

    // Store all elements of arr2
    for(int i=0;i<n;i++)
    {
        st.insert(arr2[i]);
    }

    bool subset = true;

    // Check every element of arr1
    for(int i=0;i<m;i++)
    {
        if(st.find(arr1[i]) == st.end())
        {
            subset = false;
            break;
        }
    }

    if(subset)
        cout << "arr1 is a subset of arr2";
    else
        cout << "arr1 is not a subset of arr2";
}
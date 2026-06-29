#include <bits/stdc++.h>
using namespace std;

unordered_map<int, int> freq;

bool cmp(int a, int b)
{
    if (freq[a] != freq[b])
        return freq[a] > freq[b];

    return a < b;
}

int main()
{
    vector<int> arr = {1,2,3,2,4,3,1,2};

    for (auto x : arr)
        freq[x]++;

    sort(arr.begin(), arr.end(), cmp);

    for (auto x : arr)
        cout << x << " ";
}
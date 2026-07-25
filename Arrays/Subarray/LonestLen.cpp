#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> arr = {1,2,3,1,1,1,1,4,2,3};
    int n = arr.size();
    int target = 3;
    int len = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int sum = 0;
            for (int x = i; x <= j; x++) {
                sum += arr[x];
            }
            if (sum == target) {
                len = max(len, j - i + 1);
            }
        }
    }
    cout << len;
}
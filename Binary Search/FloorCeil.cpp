#include <bits/stdc++.h>
using namespace std;

int floorValue(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] <= x) {
            ans = arr[mid];
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return ans;
}

int ceilValue(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= x) {
            ans = arr[mid];
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return ans;
}

int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int n = 5;
    int x = 7;

    cout << "Floor = " << floorValue(arr, n, x) << endl;
    cout << "Ceil = " << ceilValue(arr, n, x) << endl;
}
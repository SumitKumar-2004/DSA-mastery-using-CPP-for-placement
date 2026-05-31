#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> tempArr;

    int left = low;
    int right = mid + 1;

    // Merge two sorted halves
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            tempArr.push_back(arr[left]);
            left++;
        } else {
            tempArr.push_back(arr[right]);
            right++;
        }
    }

    // Remaining elements from left half
    while (left <= mid) {
        tempArr.push_back(arr[left]);
        left++;
    }

    // Remaining elements from right half
    while (right <= high) {
        tempArr.push_back(arr[right]);
        right++;
    }

    // Copy back to original array
    for (int i = low; i <= high; i++) {
        arr[i] = tempArr[i - low];
    }
}

void mergeSort(vector<int> &arr, int low, int high) {
    if (low >= high) {
        return;
    }

    int mid = (low + high) / 2;

    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);

    merge(arr, low, mid, high);
}

int main() {
    vector<int> arr = {5, 2, 8, 4, 1};

    int n = arr.size();

    mergeSort(arr, 0, n - 1);

    for (int x : arr) {
        cout << x << " ";
    }

    cout << endl;
}
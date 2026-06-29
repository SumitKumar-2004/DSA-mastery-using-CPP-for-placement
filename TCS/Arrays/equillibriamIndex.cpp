#include <bits/stdc++.h>
using namespace std;

// Function to find the equilibrium index in the array
int findEquilibriumIdx(int nums[], int n) {
    // Calculate the total sum of the array
    int totalSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += nums[i];
    }

    // Initialize left and right sums
    int leftSum = 0, rightSum = totalSum;

    // Loop through the array to check if any index is the equilibrium index
    for (int i = 0; i < n; i++) {
        rightSum -= nums[i];  // Subtract the current element from right sum

        // Check if left sum is equal to right sum
        if (leftSum == rightSum) {
            return i;  // Return the equilibrium index
        }

        leftSum += nums[i];  // Add the current element to left sum
    }

    return -1;  // Return -1 if no equilibrium index is found
}

int main() {
    // Initialize the array
    int arr[] = {2, 3, -1, 8, 4};
    int n = 5;  // Size of the array

    // Call the function to find the equilibrium index and output the result
    int equilibriumidx = findEquilibriumIdx(arr, n);
    cout << equilibriumidx << endl;  // Output the equilibrium index

    return 0;
}

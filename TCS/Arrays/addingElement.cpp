// Vector Operations in C++

#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> arr = {10, 20, 30, 40, 50};

    // -------------------------------
    // Print Original Vector
    // -------------------------------
    cout << "Original Vector: ";
    for(auto it : arr)
        cout << it << " ";
    cout << endl;

    // -------------------------------
    // Insert at End
    // -------------------------------
    arr.push_back(60);

    // -------------------------------
    // Insert at Beginning
    // -------------------------------
    arr.insert(arr.begin(), 5);

    // -------------------------------
    // Insert at Any Position
    // Insert 25 at index 3
    // -------------------------------
    arr.insert(arr.begin() + 3, 25);

    // -------------------------------
    // Update an Element
    // Change index 2 to 100
    // -------------------------------
    arr[2] = 100;

    // -------------------------------
    // Delete Last Element
    // -------------------------------
    arr.pop_back();

    // -------------------------------
    // Delete First Element
    // -------------------------------
    arr.erase(arr.begin());

    // -------------------------------
    // Delete at Any Position
    // Delete element at index 2
    // -------------------------------
    arr.erase(arr.begin() + 2);

    // -------------------------------
    // Print Vector
    // -------------------------------
    cout << "\nVector after Insert/Delete/Update:\n";
    for(auto it : arr)
        cout << it << " ";
    cout << endl;

    // -------------------------------
    // Size
    // -------------------------------
    cout << "\nSize : " << arr.size() << endl;

    // -------------------------------
    // First Element
    // -------------------------------
    cout << "Front : " << arr.front() << endl;

    // -------------------------------
    // Last Element
    // -------------------------------
    cout << "Back : " << arr.back() << endl;

    // -------------------------------
    // Sort Ascending
    // -------------------------------
    sort(arr.begin(), arr.end());

    cout << "\nSorted (Ascending): ";
    for(auto it : arr)
        cout << it << " ";
    cout << endl;

    // -------------------------------
    // Sort Descending
    // -------------------------------
    sort(arr.begin(), arr.end(), greater<int>());

    cout << "Sorted (Descending): ";
    for(auto it : arr)
        cout << it << " ";
    cout << endl;

    // -------------------------------
    // Reverse
    // -------------------------------
    reverse(arr.begin(), arr.end());

    cout << "Reversed: ";
    for(auto it : arr)
        cout << it << " ";
    cout << endl;

    // -------------------------------
    // Find an Element
    // -------------------------------
    auto it = find(arr.begin(), arr.end(), 30);

    if(it != arr.end())
        cout << "\n30 Found" << endl;
    else
        cout << "\n30 Not Found" << endl;

    // -------------------------------
    // Count Occurrences
    // -------------------------------
    cout << "Count of 20 : " << count(arr.begin(), arr.end(), 20) << endl;

    // -------------------------------
    // Maximum Element
    // -------------------------------
    cout << "Maximum : " << *max_element(arr.begin(), arr.end()) << endl;

    // -------------------------------
    // Minimum Element
    // -------------------------------
    cout << "Minimum : " << *min_element(arr.begin(), arr.end()) << endl;

    // -------------------------------
    // Sum of Elements
    // -------------------------------
    cout << "Sum : " << accumulate(arr.begin(), arr.end(), 0) << endl;

    // -------------------------------
    // Binary Search
    // Array must be sorted
    // -------------------------------
    sort(arr.begin(), arr.end());

    if(binary_search(arr.begin(), arr.end(), 40))
        cout << "40 Found using Binary Search" << endl;
    else
        cout << "40 Not Found" << endl;

    // -------------------------------
    // Check Empty
    // -------------------------------
    if(arr.empty())
        cout << "Vector is Empty" << endl;
    else
        cout << "Vector is Not Empty" << endl;

    // -------------------------------
    // Clear Vector
    // -------------------------------
    arr.clear();

    cout << "Size after Clear : " << arr.size() << endl;

    return 0;
}
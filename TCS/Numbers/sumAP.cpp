//Sum of AP series 
#include <bits/stdc++.h>
using namespace std;

// Function to calculate the sum of the Arithmetic Progression (AP) series
float sumofAp(float a, float d, int n)
{
    float sum = 0;

    // Loop to calculate the sum of the first n terms
    for (int i = 1; i <= n; i++)
    {
        sum += a; // Add the current term to the sum
        a += d;   // Update the next term by adding the common difference (d)
    }
    
    return sum; // Return the total sum
}

int main()
{
    float a = 1.5, d = 3; // First term and common difference
    int n = 5; // Number of terms in the AP series

    // Output the sum of the given AP series
    cout << "Sum of Given Ap Series: " << sumofAp(a, d, n) << endl;

    return 0;
}

//formula : Sn = (n / 2)((2a + n-1)*d)
//it gives tc: O(1) and sc:O(1)

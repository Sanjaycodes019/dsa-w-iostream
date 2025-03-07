// maximum subarray sum (bruteforce)

#include<bits/stdc++.h>
using namespace std;

int maxSubarraySum(int arr[], int n) {
    int maxSum = INT_MIN;
    
    for (int i = 0; i < n; i++) {
        int sum = 0; // Running sum
        for (int j = i; j < n; j++) {
            sum += arr[j];
            maxSum = max(maxSum, sum);
        }
    }
    
    return maxSum;
}

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Maximum Subarray Sum: " << maxSubarraySum(arr, n) << endl;
    return 0;
}
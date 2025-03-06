// number that appears once, when every number appears twice
// better approach hashing

#include<bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& arr) {
    int maxElement = *max_element(arr.begin(), arr.end()); // Find max value in array
    vector<int> hash(maxElement + 1, 0); // Create hash array

    // Count occurrences
    for (int i = 0; i < arr.size(); i++) {
        hash[arr[i]]++;
    }

    // Find the number appearing once
    for (int i = 0; i < arr.size(); i++) {
        if (hash[arr[i]] == 1) {
            return arr[i];
        }
    }

    return -1; // Just in case (should never reach here)
}

int main() {
    vector<int> nums = {4, 1, 2, 1, 2};
    cout << singleNumber(nums) << endl; 
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

// Function to find the majority element in an array using a map
// A majority element appears more than n/2 times in the array
int majorityElement(vector<int>& nums) {
    map<int, int> mpp;
    for (int i = 0; i < nums.size(); i++) {
        mpp[nums[i]]++;
    }

    for (auto it : mpp) {
        if (it.second > (nums.size() / 2)) 
            return it.first;
    }
    return -1;  // No majority element found
}

int main() {
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};  // Example input
    int result = majorityElement(nums);
    if (result != -1) {
        cout << "Majority Element: " << result << endl;
    } else {
        cout << "No Majority Element found" << endl;
    }
    return 0;
}

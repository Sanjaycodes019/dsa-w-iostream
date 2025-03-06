// optimal approach (without using map)
// two pointer approach

#include<bits/stdc++.h>
using namespace std;


vector<int> twoSum(vector<int>& arr, int tar) {
    vector<pair<int, int>> nums;  
    for (int i = 0; i < arr.size(); i++) {
        nums.push_back({arr[i], i});
    }

    sort(nums.begin(), nums.end()); 

    int left = 0, right = nums.size() - 1;
    vector<int> ans;

    while (left < right) {
        int sum = nums[left].first + nums[right].first;

        if (sum == tar) {
            ans.push_back(nums[right].second);
            ans.push_back(nums[left].second);
            break;
        } else if (sum < tar) {
            left++;
        } else {
            right--;
        }
    }

    return ans;
}


int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(nums, target);

    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No solution found." << endl;
    }

    return 0;
}
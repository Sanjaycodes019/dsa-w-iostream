#include<bits/stdc++.h>
using namespace std;

// Brute Force Approach - O(n^2)
int missingNumberBruteForce(vector<int>& nums) {
    int numsSize = nums.size();
    for (int i = 0; i <= numsSize; i++) {
        bool found = false;
        for (int j = 0; j < numsSize; j++) {
            if (nums[j] == i) {
                found = true;
                break;
            }
        }
        if (!found) return i;
    }
    return -1;
}

// Better Approach (Using Hashing) - O(n) time, O(n) space
int missingNumberHashing(vector<int>& nums) {
    int numsSize = nums.size();
    vector<int> hasharr(numsSize + 1, 0);
    
    for (int i = 0; i < numsSize; i++) {
        hasharr[nums[i]] = 1;
    }

    for (int i = 0; i <= numsSize; i++) {
        if (hasharr[i] == 0) return i;
    }
    return -1;
}

// Optimal Approach 1 (Using Sum Formula) - O(n) time, O(1) space
int missingNumberSum(vector<int>& nums) {
    int numsSize = nums.size();
    int sum = (numsSize * (numsSize + 1)) / 2;
    int arrsum = 0;

    for (int i = 0; i < numsSize; i++) {
        arrsum += nums[i];
    }

    return sum - arrsum;
}

// Optimal Approach 2 (Using XOR) - O(n) time, O(1) space
int missingNumberXOR(vector<int>& nums) {
    int numsSize = nums.size();
    int xor1 = 0, xor2 = 0;

    for (int i = 0; i <= numsSize; i++) {
        xor1 ^= i;
    }

    for (int i = 0; i < numsSize; i++) {
        xor2 ^= nums[i];
    }

    return xor1 ^ xor2;
}

int main() {
    vector<int> nums = {3, 0, 1};

    cout << "Brute Force Approach: " << missingNumberBruteForce(nums) << endl;
    cout << "Better (Hashing) Approach: " << missingNumberHashing(nums) << endl;
    cout << "Optimal (Sum Formula) Approach: " << missingNumberSum(nums) << endl;
    cout << "Optimal (XOR) Approach: " << missingNumberXOR(nums) << endl;

    return 0;
}

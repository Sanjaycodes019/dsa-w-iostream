// Max Consecutive number of 1's
// bruteforce approach
#include <bits/stdc++.h>
using namespace std;
int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int max1 = 0;
    int count = 0;
    
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == 1) {
            count++;
            max1 = max(max1, count);
        } else {
            count = 0;
        }
    }
    return max1;
}
int main() {
    int nums[] = {1, 1, 0, 1, 1, 1};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    cout << "Max Consecutive Ones: " << findMaxConsecutiveOnes(nums, numsSize) << endl;
    return 0;
}

// right rotate the array by k times
// optimal

#include <iostream>
using namespace std;

void rightrotate(int* nums, int numsSize, int k) {
    k = k % numsSize; 
    if (k == 0) return;

    int temp[k]; 

    for (int i = 0; i < k; i++) {
        temp[i] = nums[numsSize - k + i];
    }

    // Shift the remaining elements to the right
    for (int i = numsSize - 1; i >= k; i--) {
        nums[i] = nums[i - k];
    }

    // Copy the elements from the temporary array back to the original array
    for (int i = 0; i < k; i++) {
        nums[i] = temp[i];
    }
}

int main() {
    int nums[] = {1, 2, 3, 4, 5, 6, 7};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int k = 3;

    rightrotate(nums, numsSize, k);

    cout << "Rotated array: ";
    for (int i = 0; i < numsSize; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
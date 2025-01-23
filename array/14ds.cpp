#include <iostream>
using namespace std;

void leftRotate(int* nums, int numsSize, int k) {
    k = k % numsSize; 
    if (k == 0) return; 

    int temp[k]; 

    for (int i = 0; i < k; i++) {
        temp[i] = nums[i];
    }

    // Shift the remaining elements to the left
    for (int i = 0; i < numsSize - k; i++) {
        nums[i] = nums[i + k];
    }

    for (int i = 0; i < k; i++) {
        nums[numsSize - k + i] = temp[i];
    }
}

int main() {
    int nums[] = {1, 2, 3, 4, 5, 6, 7};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int k = 3;

    leftRotate(nums, numsSize, k);

    cout << "Left rotated array: ";
    for (int i = 0; i < numsSize; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
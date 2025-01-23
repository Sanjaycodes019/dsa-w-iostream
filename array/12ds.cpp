//remove duplicates from a sorted array
//modify the array and return the unique element size
// bruteforce --> optimal
// tc = nlogn
// sc = O(n)

#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0) return 0;

    int i = 0;
    for (int j = 1; j < numsSize; j++) {
        if (nums[i] != nums[j]) {
            i++;
            nums[i] = nums[j]; // to update the array with new unique element
        }
    }
    return i + 1;
}

int main() {
    int nums[] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    int k = removeDuplicates(nums, numsSize);

    cout << "Number of unique elements: " << k << endl;
    cout << "Unique elements in the array: ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
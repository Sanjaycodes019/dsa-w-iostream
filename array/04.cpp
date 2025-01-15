//binary search
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int k) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == k) return mid;
        else if (arr[mid] < k) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {2, 4, 5, 7, 8, 12, 15, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 8;
    int result = binarySearch(arr, n, k);
    if (result != -1) cout << k << " is found at index " << result << endl;
    else cout << k << " is not found" << endl;
    return 0;
}

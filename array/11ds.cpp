#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true; 
}

int main() {
    int arr[] = {2, 3, 4, 5, 5, 7, 8}; 
    int n = sizeof(arr) / sizeof(arr[0]);
    
    if (isSorted(arr, n)) {
        cout << "The given array is sorted" << endl;
    } else {
        cout << "The given array is not sorted" << endl;
    }
    
    return 0;
}
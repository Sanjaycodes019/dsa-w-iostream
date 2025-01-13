//selection sort
//select minimum and swap
#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int mini = i;  // Index of the minimum element
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[mini]) {
                mini = j;
            }
        }
        swap(arr[i], arr[mini]);
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90}; 
    int n = sizeof(arr) / sizeof(arr[0]);     

    selection_sort(arr, n);                   

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";    // Print the sorted array
    }
    cout << endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) { // Compare adjacent elements
            if (arr[j] > arr[j + 1]) {       // Swap if the left element is greater
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int arr[] = {12, 23, 43, 32, 21, 9, 4, 8, 2, 6}; 
    int n = sizeof(arr) / sizeof(arr[0]);           

    bubble_sort(arr, n);                           

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";                     
    }
    cout << endl;

    return 0;
}

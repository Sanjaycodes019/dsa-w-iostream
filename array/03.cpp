//searching element
#include <bits/stdc++.h>
using namespace std;

void searchElement(int arr[], int k, int n) {
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == k) {
            cout << k << " is found at index " << i << endl;
            found = true;
            break; // Exit the loop once the element is found
        }
    }
    if (!found) {
        cout << k << " is not found" << endl;
    }
}

int main() {
    int arr[] = {2, 4, 5, 2, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 8; // The key/element which is to be searched

    searchElement(arr, k, n);
    return 0;
}

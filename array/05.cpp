//insertion in the array
#include <bits/stdc++.h>
using namespace std;

void insertAtPosition(int arr[], int &n, int position, int element, int capacity) {
    if (n == capacity) return;
    for (int i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    n++;
}

int main() {
    int arr[10] = {1, 2, 3, 5, 6};
    int n = 5;
    int capacity = 10;
    int position = 3;
    int element = 4;

    insertAtPosition(arr, n, position, element, capacity);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

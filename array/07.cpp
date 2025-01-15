//deletion
#include<bits/stdc++.h>
using namespace std;

void deleteElement(int arr[], int& n, int element) {
    int pos = -1; 
    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            pos = i;
            break;
        }
    }
    if (pos == -1) return;
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
}

int main() {
    int arr[10] = {3, 8, 2, 5, 7, 1};
    int n = 6;
    int element = 5;

    deleteElement(arr, n, element);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

//reverse of an array
#include <bits/stdc++.h>
using namespace std;

void f(int i, int arr[], int n) {
    if (i >= n / 2) return;
    swap(arr[i], arr[n - i - 1]);
    f(i + 1, arr, n);
}

int main() {
    int arr[] = {1, 2, 4, 5, 6, 7, 65, 3, 45, 54};
    int n = sizeof(arr) / sizeof(arr[0]);

    f(0, arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

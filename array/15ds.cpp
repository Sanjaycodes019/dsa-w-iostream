// moving all of the zeroes to the end
// optimal
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 2, 0, 8, 5, 0, 4, 0, 7, 8, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    int left = 0; 

    for (int right = 0; right < n; right++) {
        if (arr[right] != 0) {
            swap(arr[left], arr[right]);
            left++;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

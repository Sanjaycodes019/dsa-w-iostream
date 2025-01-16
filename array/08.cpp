//second max most optimised way
#include<bits/stdc++.h>
using namespace std;

int second_max(int arr[], int n) {
    int max1 = INT_MIN, max2 = INT_MIN; 

    for (int i = 0; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1; 
            max1 = arr[i]; 
        } else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }

    if (max2 == INT_MIN) {
        return 0;
    }
    return max2;
}

int main() {
    int N; 
    cin >> N; 
    int arr[N];

    for (int i = 0; i < N; i++) {
        cin >> arr[i]; 
    }

    cout << second_max(arr, N) << endl; 
    return 0;
}

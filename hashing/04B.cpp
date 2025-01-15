// using xor operatoin
#include <bits/stdc++.h>
using namespace std;

bool areArraysEqual(int arr1[], int arr2[], int n) {
    int xor1 = 0, xor2 = 0, sum1 = 0, sum2 = 0;

    for (int i = 0; i < n; i++) {
        xor1 = xor1 ^ arr1[i];
        xor2 = xor2 ^ arr2[i];
        sum1 = sum1 + arr1[i];
        sum2 = sum2 + arr2[i];

    }

    return (xor1 == xor2 && sum1 == sum2);
}

int main() {
    const int n = 5;
    int arr1[n] = {3, 1, 4, 2, 5};
    int arr2[n] = {5, 4, 3, 2, 1};

    if (areArraysEqual(arr1, arr2, n)) {
        cout << "The arrays are equal." << endl;
    } else {
        cout << "The arrays are not equal." << endl;
    }

    return 0;
}

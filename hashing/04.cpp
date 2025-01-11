#include <iostream>
using namespace std;

bool areArraysEqual(int arr1[], int arr2[], int n) {
    const int MAX = 100; // Assumed maximum value in the arrays
    int hash[MAX] = {0};

    for (int i = 0; i < n; i++) {
        hash[arr1[i]]++;
    }

    for (int i = 0; i < n; i++) {
        hash[arr2[i]]--;
    }

    for (int i = 0; i < MAX; i++) {
        if (hash[i] != 0) {
            return false;
        }
    }

    return true;
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

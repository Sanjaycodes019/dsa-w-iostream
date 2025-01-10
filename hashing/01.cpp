// Given an array of integers and a set of queries, 
// write a program to find the frequency of each queried number in the array. 
// The maximum value in the array can go up to 1,000,001.

#include <bits/stdc++.h>
using namespace std;

int main() {
    const int n = 10; // Size of the array
    int arr[n] = {1, 2, 2, 3, 3, 3, 4, 4, 5, 5};

    const int MAX = 1000001; // Maximum possible element
    int hash[MAX] = {0};

    // Precompute frequencies
    for (int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }

    const int q = 5; // Number of queries
    int queries[q] = {2, 3, 4, 5, 6};

    // Process queries
    for (int i = 0; i < q; i++) {
        cout << hash[queries[i]] << endl;
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n = 6;
    int arr[] = {1, 2, 2, 3, 3, 3};

    // Precompute
    int hash[13] = {0};  // Adjust size if needed
    for (int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }

    int q = 3;
    int queries[] = {1, 2, 3};

    // Fetch and output results for pre-defined queries
    for (int i = 0; i < q; i++) {
        cout << hash[queries[i]] << endl;
    }

    return 0;
}

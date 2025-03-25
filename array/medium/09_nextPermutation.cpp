// Program to find the next lexicographical permutation of a number sequence
// Time Complexity: O(N)
// Space Complexity: O(1)
// Narayana Algorithm
#include<bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int>& a) {
    int n = a.size();
    int index = -1;

    // Step 1: Find the first index 'index' from the end where a[index] < a[index + 1]
    for (int i = n - 2; i >= 0; i--) {
        if (a[i] < a[i + 1]) {
            index = i;
            break;
        }
    }

    // If no such index found, reverse the entire array (it is the last permutation)
    if (index == -1) {
        reverse(a.begin(), a.end());
        return;
    }

    // Step 2: Find the element just greater than a[index] from the end
    for (int i = n - 1; i > index; i--) {
        if (a[i] > a[index]) {
            swap(a[i], a[index]);
            break;
        }
    }

    // Step 3: Reverse the subarray after index
    reverse(a.begin() + index + 1, a.end());
}

int main() {
    vector<int> a = {1, 2, 3}; // Example input
    nextPermutation(a);

    cout << "Next Permutation: ";
    for (auto it : a) cout << it << " ";
    cout << endl;

    return 0;
}

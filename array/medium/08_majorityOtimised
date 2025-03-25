// Program to find the Majority Element using Moore's Voting Algorithm
// Time Complexity: O(N)
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& v) {
    int count = 0;
    int element = 0;

    // Phase 1: Finding the potential majority element
    for (int i = 0; i < v.size(); i++) {
        if (count == 0) {
            element = v[i];
            count = 1;
        } else if (element == v[i]) {
            count++;
        } else {
            count--;
        }
    }

    // Phase 2: Verifying if the element is actually the majority
    int cnt = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == element) cnt++;
    }

    // Checking if the element appears more than n/2 times
    if (cnt > v.size() / 2) return element;
    else return -1;  // No majority element found
}

int main() {
    vector<int> v = {2, 2, 1, 1, 1, 2, 2}; // Example input
    int result = majorityElement(v);

    if (result != -1)
        cout << "Majority Element: " << result << endl;
    else
        cout << "No Majority Element found" << endl;

    return 0;
}

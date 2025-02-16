// finding union of two array
#include <bits/stdc++.h>
using namespace std;

vector<int> findUnion(vector<int>& arr1, vector<int>& arr2) {
    unordered_set<int> s;
    
    // Insert all elements of arr1 into the set
    for (int num : arr1) {
        s.insert(num);
    }
    
    // Insert all elements of arr2 into the set
    for (int num : arr2) {
        s.insert(num);
    }
    
    // Convert set to vector and sort the result
    vector<int> result(s.begin(), s.end());
    sort(result.begin(), result.end());
    
    return result;
}

int main() {
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {3, 4, 5, 6, 7};
    
    vector<int> unionArray = findUnion(arr1, arr2);
    
    // Print the result
    cout << "Union of arrays: ";
    for (int num : unionArray) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
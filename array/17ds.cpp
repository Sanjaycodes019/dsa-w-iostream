// union of array, most optimal approach
#include <bits/stdc++.h>
using namespace std;

vector<int> findUnion(vector<int>& arr1, vector<int>& arr2) {
    vector<int> result;
    int i = 0, j = 0;
    
    // Traverse both arrays simultaneously
    while (i < arr1.size() && j < arr2.size()) {
        // If element in arr1 is smaller, add it to result and move i ahead
        if (arr1[i] < arr2[j]) {
            if (result.empty() || result.back() != arr1[i])
                result.push_back(arr1[i]);
            i++;
        } 
        // If element in arr2 is smaller, add it to result and move j ahead
        else if (arr1[i] > arr2[j]) {
            if (result.empty() || result.back() != arr2[j])
                result.push_back(arr2[j]);
            j++;
        } 
        // If both elements are equal, add only one and move both pointers
        else {
            if (result.empty() || result.back() != arr1[i])
                result.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    
    // Add remaining elements from arr1
    while (i < arr1.size()) {
        if (result.empty() || result.back() != arr1[i])
            result.push_back(arr1[i]);
        i++;
    }
    
    // Add remaining elements from arr2
    while (j < arr2.size()) {
        if (result.empty() || result.back() != arr2[j])
            result.push_back(arr2[j]);
        j++;
    }
    
    return result;
}

int main() {
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {3, 4, 5, 6, 7};
    
    vector<int> unionArray = findUnion(arr1, arr2);
    
    // Print the final union of both arrays
    cout << "Union of arrays: ";
    for (int num : unionArray) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}

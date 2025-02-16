// union of array, most optimal approach
#include <bits/stdc++.h>
using namespace std;

vector<int> findUnion(vector<int>& arr1, vector<int>& arr2) {
    vector<int> result;
    int i = 0, j = 0;
    
    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] < arr2[j]) {
            if (result.empty() || result.back() != arr1[i])
                result.push_back(arr1[i]);
            i++;
        } else if (arr1[i] > arr2[j]) {
            if (result.empty() || result.back() != arr2[j])
                result.push_back(arr2[j]);
            j++;
        } else {
            if (result.empty() || result.back() != arr1[i])
                result.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    
    while (i < arr1.size()) {
        if (result.empty() || result.back() != arr1[i])
            result.push_back(arr1[i]);
        i++;
    }
    
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
    
    cout << "Union of arrays: ";
    for (int num : unionArray) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
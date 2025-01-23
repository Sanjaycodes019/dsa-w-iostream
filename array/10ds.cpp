#include <bits/stdc++.h>
using namespace std;

int secondLargest(vector<int> &arr) {
    int largest = INT_MIN; 
    int secondLargest = INT_MIN;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > largest) {
            secondLargest = largest; 
            largest = arr[i]; 
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    return secondLargest; 
}

int main() {
    vector<int> arr = {12, 35, 1, 10, 34, 1}; 
    int result = secondLargest(arr);
    cout << "Second Largest: " << result << endl;
    return 0;
}
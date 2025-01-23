#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {3, 5, 7, 2, 8, 1, 4};
    
    if (arr.empty()) { //always check if the array is empty
        cout << "The array is empty." << endl;
        return 0;
    }

    // Initialize largest with the first element of the array
    int largest = arr[0];

    // Iterate through the array to find the largest element
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    cout << "The largest element in the array is: " << largest << endl;
    
    return 0;
}
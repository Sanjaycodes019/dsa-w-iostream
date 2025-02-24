// linear search
#include<bits/stdc++.h>
using namespace std;

int linearSearch(int n, int num, vector<int> &arr) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            return i;  
        }
    }
    return -1;  
}

int main() {
    vector<int> arr = {5, 3, 8, 2, 9, 1};
    int n = arr.size();
    int num = 3;

    int index = linearSearch(n, num, arr);

    if (index != -1) {
        cout << "Number found at index " << index << endl;
    } else {
        cout << "Number not found in the array" << endl;
    }

    return 0;
}

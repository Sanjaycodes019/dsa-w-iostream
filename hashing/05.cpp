//using map method for finding frequency
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 3, 3, 2, 2, 5, 6, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]); 
    map<int, int> mpp;

    for (int i = 0; i < n; i++) {
        mpp[arr[i]]++;
    }

    int q[] = {2, 4, 3, 6};
    int qn = sizeof(q) / sizeof(q[0]);

    for (int i = 0; i < qn; i++) {
        if (mpp.find(q[i]) != mpp.end()) {
            cout << "Frequency of " << q[i] << ": " << mpp[q[i]] << endl;
        } else {
            cout << "Frequency of " << q[i] << ": 0" << endl;
        }
    }

    return 0;
}

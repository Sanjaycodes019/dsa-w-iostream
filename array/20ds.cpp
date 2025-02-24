// union of two array (optimised two pointer method)

#include <bits/stdc++.h>
using namespace std;

vector<int> findUnion(vector<int>& a, vector<int>& b) {
    int n1 = a.size();
    int n2 = b.size();
    int i = 0, j = 0;
    vector<int> unionArr;

    // Traverse both arrays
    while (i < n1 && j < n2) {
        if (a[i] <= b[j]) {
            if (unionArr.empty() || unionArr.back() != a[i]) {
                unionArr.push_back(a[i]);
            }
            i++;
        } else {
            if (unionArr.empty() || unionArr.back() != b[j]) {
                unionArr.push_back(b[j]);
            }
            j++;
        }
    }

    // Add remaining elements from array a
    while (i < n1) {
        if (unionArr.empty() || unionArr.back() != a[i]) {
            unionArr.push_back(a[i]);
        }
        i++;
    }

    // Add remaining elements from array b
    while (j < n2) {
        if (unionArr.empty() || unionArr.back() != b[j]) {
            unionArr.push_back(b[j]);
        }
        j++;
    }

    return unionArr;
}


int main() {
    vector<int> a = {1, 3, 5, 7};
    vector<int> b = {2, 3, 5, 6};

    vector<int> result = findUnion(a, b);

    cout << "Union of arrays: ";
    for (auto it = result.begin(); it != result.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}

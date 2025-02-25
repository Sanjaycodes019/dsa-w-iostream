// union of two array (optimised two pointer method)

#include <bits/stdc++.h>
using namespace std;

vector<int> sortedArray(vector<int> a, vector<int> b) {
    int n1 = a.size(), n2 = b.size();
    int i = 0, j = 0;
    vector<int> unionArr;

    while (i < n1 && j < n2) {
        if (a[i] <= b[j]) {
            if (unionArr.empty() || unionArr.back() != a[i])
                unionArr.push_back(a[i]);
            i++;
        } else {
            if (unionArr.empty() || unionArr.back() != b[j])
                unionArr.push_back(b[j]);
            j++;
        }
    }

    while (i < n1) {
        if (unionArr.empty() || unionArr.back() != a[i])
            unionArr.push_back(a[i]);
        i++;
    }

    while (j < n2) {
        if (unionArr.empty() || unionArr.back() != b[j])
            unionArr.push_back(b[j]);
        j++;
    }

    return unionArr;
}

int main() {
    vector<int> a = {1, 2, 4, 5, 6};
    vector<int> b = {2, 3, 5, 7};

    vector<int> result = sortedArray(a, b);

    for (int num : result)
        cout << num << " ";

    return 0;
}

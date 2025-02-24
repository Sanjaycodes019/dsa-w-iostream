// union of two array

#include <bits/stdc++.h>
using namespace std;

vector<int> findUnion(vector<int> &a, vector<int> &b) {
    int n1 = a.size();
    int n2 = b.size();
    set<int> st;

    for (int i = 0; i < n1; i++) {
        st.insert(a[i]);
    }
    for (int i = 0; i < n2; i++) {
        st.insert(b[i]);
    }

    vector<int> temp;
    for (auto it = st.begin(); it != st.end(); it++) {
        temp.push_back(*it);
    }

    return temp;
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

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> arr = {"apple", "banana", "apple", "orange", "banana", "grape", "apple"};
    map<string, int> mpp;

    for (const string &str : arr) {
        mpp[str]++;
    }

    vector<string> queries = {"apple", "banana", "grape", "mango"};
    for (const string &query : queries) {
        if (mpp.find(query) != mpp.end()) {
            cout << "Frequency of \"" << query << "\": " << mpp[query] << endl;
        } else {
            cout << "Frequency of \"" << query << "\": 0" << endl;
        }
    }

    return 0;
}

//similar question, number hashing

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "aabbcccde";
    const int MAX = 256;
    int hash[MAX] = {0};

    for (int i = 0; i < s.size(); i++) {
        hash[s[i]]++;
    }

    const int q = 5;
    char queries[q] = {'a', 'b', 'c', 'd', 'e'};

    for (int i = 0; i < q; i++) {
        cout << "Frequency of '" << queries[i] << "': " << hash[queries[i]] << endl;
    }

    return 0;
}

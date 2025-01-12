#include <bits/stdc++.h>
using namespace std;

int main() {
    string str = "programming";
    map<char, int> mpp;

    for (char ch : str) {
        mpp[ch]++;
    }

    for (auto &it : mpp) {
        cout << "Frequency of '" << it.first << "': " << it.second << endl;
    }

    return 0;
}

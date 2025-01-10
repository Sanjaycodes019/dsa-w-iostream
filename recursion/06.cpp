#include <bits/stdc++.h>
using namespace std;

void reverseString(int i, string &s, int n) {
    if (i >= n / 2) return;
    swap(s[i], s[n - i - 1]);
    reverseString(i + 1, s, n);
}

int main() {
    string s = "Sanjay";
    int n = s.length();

    reverseString(0, s, n);

    cout << s << endl;

    return 0;
}

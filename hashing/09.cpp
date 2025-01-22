#include <bits/stdc++.h>
using namespace std;

char firstNonRepeatingChar(string s) {
    int hash[26] = {0};

    for (char ch : s) {
        hash[ch - 'a']++;
    }

    for (char ch : s) {
        if (hash[ch - 'a'] == 1) {
            return ch;
        }
    }

    return '#'; // Special character indicating no non-repeating character
}

int main() {
    string s = "geeksforgeeks";
    char result = firstNonRepeatingChar(s);

    if (result == '#') {
        cout << "-1" << endl; // Output -1 if no non-repeating character exists
    } else {
        cout << result << endl;
    }

    return 0;
}

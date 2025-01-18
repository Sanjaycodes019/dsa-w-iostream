#include <bits/stdc++.h>
using namespace std;

char firstNonRepeatingChar(string s) {
    int hash[26] = {0}; // Array to store frequencies of 'a' to 'z'

    // Step 1: Count frequency of each character
    for (char ch : s) {
        hash[ch - 'a']++;
    }

    // Step 2: Find the first character with frequency 1
    for (char ch : s) {
        if (hash[ch - 'a'] == 1) {
            return ch;
        }
    }

    return '-1'; // Return -1 if no non-repeating character is found
}

int main() {
    string s = "geeksforgeeks";
    char result = firstNonRepeatingChar(s);

    if (result == '-1') {
        cout << "-1" << endl;
    } else {
        cout << result << endl;
    }

    return 0;
}

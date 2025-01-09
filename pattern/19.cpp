#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 5;
    int spaces = 0;

    // Upper half of the pattern
    for (int i = 0; i < n; i++) {
        // Stars
        for (int j = 1; j <= n - i; j++) {
            cout << "*";
        }

        // Spaces
        for (int j = 0; j < spaces; j++) {
            cout << " ";
        }

        // Stars
        for (int j = 1; j <= n - i; j++) {
            cout << "*";
        }

        spaces += 2;
        cout << endl;
    }

    spaces -= 2; // Reset spaces for lower half

    // Lower half of the pattern
    for (int i = 1; i <= n; i++) {
        // Stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // Spaces
        for (int j = 0; j < spaces; j++) {
            cout << " ";
        }

        // Stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        spaces -= 2;
        cout << endl;
    }

    return 0;
}

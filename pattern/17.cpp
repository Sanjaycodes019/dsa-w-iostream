#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 5; 
    for (int i = 0; i < n; i++) {

        // Print leading spaces
        for (int j = 0; j < n - 1 - i; j++) {
            cout << " ";
        }

        char ch = 'A';
        int mid = (2 * i + 1) / 2; // Corrected the variable name to 'mid'
        
        // Print characters
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << ch;
            if (j < mid) ch++;   // Increment character until the middle
            else ch--;           // Decrement character after the middle
        }

        // Print trailing spaces (optional for symmetry)
        for (int j = 0; j < n - 1 - i; j++) {
            cout << " ";
        }

        cout << endl; // Move to the next line
    }

    return 0;
}

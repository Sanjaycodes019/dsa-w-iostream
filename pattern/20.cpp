#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 5; // You can adjust 'n' for the size of the diamond
    int spaces = 2 * n - 2;

    for (int i = 1; i <= 2 * n - 1; i++) {
        int stars;

        // Determine the number of stars for the current row
        if (i <= n) 
            stars = i; // First half
        else 
            stars = 2 * n - i; // Second half

        // Print stars
        for (int j = 1; j <= stars; j++) {
            cout << "*";
        }

        // Print spaces
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }

        // Print stars again
        for (int j = 1; j <= stars; j++) {
            cout << "*";
        }

        // Adjust spaces for the next row
        if (i < n) 
            spaces -= 2; // Reduce spaces in the first half
        else 
            spaces += 2; // Increase spaces in the second half

        cout << endl;
    }

    return 0;
}

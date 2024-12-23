#include <bits/stdc++.h>
using namespace std;

int main() {
    int day;
    cout << "Enter a number (1-7): ";
    cin >> day;

    // Match the input with corresponding day
    switch (day) {
        case 1: 
            cout << "Monday"; 
            break; // Exit the switch once the match is found
        case 2: 
            cout << "Tuesday"; 
            break;
        case 3: 
            cout << "Wednesday"; 
            break;
        case 4: 
            cout << "Thursday"; 
            break;
        case 5: 
            cout << "Friday"; 
            break;
        case 6: 
            cout << "Saturday"; 
            break;
        case 7: 
            cout << "Sunday"; 
            break;
        default: 
            cout << "Invalid input!"; // Handle invalid input
    }

    return 0;
}

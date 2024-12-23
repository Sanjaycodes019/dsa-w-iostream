// Datatypes in C++

#include <bits/stdc++.h> // Includes all standard libraries
using namespace std;

int main() {
    // Integer types
    int a = 42;           // Stores whole numbers
    long b = 123456789L;   // Stores larger numbers
    long long c = 9876543210LL; // Stores very large numbers

    cout << "int: " << a << endl;
    cout << "long: " << b << endl;
    cout << "long long: " << c << endl;

    // Floating-point types
    float x = 3.14f;      // Decimal numbers (less precision)
    double y = 23.323;    // Decimal numbers (high precision)

    cout << "float: " << x << endl;
    cout << "double: " << y << endl;

    // String input
    string s;
    cout << "Enter a string: ";
    cin.ignore();         // Clear input buffer
    getline(cin, s);      // Reads a full line
    cout << "You entered: " << s << endl;

    // Character input
    char ch;
    cout << "Enter a character: ";
    cin >> ch;            // Reads one character
    cout << "You entered: " << ch << endl;

    // Boolean type
    bool isLearning = true; // True or false values
    cout << "Are you learning C++? " << (isLearning ? "Yes" : "No") << endl;

    return 0;
}

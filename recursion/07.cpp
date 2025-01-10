#include<bits/stdc++.h>
using namespace std;

void fibonacci(int n, int a = 0, int b = 1) {
    if (n == 0) return;
    cout << a << " ";
    fibonacci(n - 1, b, a + b);
}

int main() {
    int n = 10;
    cout << "Fibonacci sequence up to " << n << " terms: ";
    fibonacci(n);
    cout << endl;
    return 0;
}

//fibonacci sequence upto n

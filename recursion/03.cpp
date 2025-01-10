//print from n to 1
#include<bits/stdc++.h>
using namespace std;

void printName(int i, int n) {
    if (i>n) return;
    cout << n << endl;
    printName(i, n-1);
}

int main() {
    int n = 5;
    int i = 1;
    printName(i, n);
    return 0;
}

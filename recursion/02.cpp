//print from 1 to n
#include<bits/stdc++.h>
using namespace std;

void printName(int i, int n) {
    if (i>n) return;
    cout << i << endl;
    printName(i+1, n);
}

int main() {
    int n = 5;
    int i = 1;
    printName(i, n);
    return 0;
}

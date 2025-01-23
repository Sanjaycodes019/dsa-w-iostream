// reverse Array
#include <bits/stdc++.h>
using namespace std;

int main() {
    char arr[] = {'a', 'b', 'c', 'd', 'e'};
    int n = sizeof(arr) / sizeof(arr[0]); 

    stack<char> s;

    for (int i = 0; i < n; i++) {
        s.push(arr[i]);
    }

    int i = 0;
    while (!s.empty()) {
        arr[i] = s.top();
        s.pop();
        i++;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

// timecomplexity = O(n)
// spaceComplexity = O(n)
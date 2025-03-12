#include <bits/stdc++.h>
using namespace std;

void incr(vector<int>& points) {
    int n = points.size();
    int carry = 1;
    for (int i = n - 1; i >= 0; i--) {
        int sum = points[i] + carry;
        points[i] = sum % 10;
        carry = sum / 10;
    }
    if (carry > 0) {
        points.insert(points.begin(), carry);
    }
}

int main() {
    vector<int> points = {9, 9, 9};
    incr(points);
    for (int i : points) {
        cout << i;
    }
    cout << endl;
    return 0;
} // 
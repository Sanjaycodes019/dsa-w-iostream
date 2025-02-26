// intersection, two array
#include <bits/stdc++.h>

using namespace std;

vector<int> intersectionOfArrays(vector<int>& a, vector<int>& b) {
    int i = 0, j = 0;
    vector<int> intersectionArr;

    while (i < a.size() && j < b.size()) {
        if (a[i] == b[j]) {
            if (intersectionArr.empty() || intersectionArr.back() != a[i]) 
                intersectionArr.push_back(a[i]);
            i++, j++;
        } 
        else if (a[i] < b[j]) 
            i++;
        else 
            j++;
    }
    
    return intersectionArr;
}

int main() {
    vector<int> a = {1, 2, 4, 5, 6};
    vector<int> b = {2, 3, 5, 7};

    vector<int> result = intersectionOfArrays(a, b);

    cout << "Intersection: ";
    for (int num : result) 
        cout << num << " ";

    return 0;
}

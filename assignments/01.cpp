#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(string strs[], int n) {
    string prefix = "";
    for (int i = 0; ; i++) { 
        char current = strs[0][i];
        for (int j = 0; j < n; j++) {
            if (i >= strs[j].length() || strs[j][i] != current) {
                return prefix; 
            }
        }
        prefix += current; 
    }
    return prefix; 
}

int main() {
    int n = 5;
    string strs[] = {"flower", "flow", "flight", "flame", "flap"};
    
    string result = longestCommonPrefix(strs, n);
    cout << result << endl;  
    
    return 0;
}

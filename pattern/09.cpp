#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 5;
    
    // Upper Part of the pattern
    for(int i = 0; i < n; i++){
        // Space before stars
        for (int j = 0; j < n - i - 1; j++){
            cout << " ";
        }
        // Star
        for (int j = 0; j < 2*i + 1; j++){
            cout << "*";
        }
        // Space after stars
        for (int j = 0; j < n - i - 1; j++){
            cout << " ";
        }
        cout << endl;
    }
    
    // Lower Part of the pattern
    for(int i = 0; i < n - 1; i++){ 
        // Space before stars
        for (int j = 0; j < i; j++){
            cout << " ";
        }
        // Star
        for (int j = 0; j < 2*n - (2*i + 1); j++){
            cout << "*";
        }
        // Space after stars
        for (int j = 0; j <= i; j++){
            cout << " ";
        }
        cout << endl;
    }
}

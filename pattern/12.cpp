#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 5;
    for (int i = 1; i <= n; i++){
        // Numbers in increasing order
        for (int j = 1; j <= i; j++){
            cout << j;
        }
        
        // Spaces
        for (int j = 1; j <= 2 * (n - i); j++){
            cout << " ";
        }
        
        // Numbers in decreasing order
        for (int j = i; j >= 1; j--){
            cout << j;
        }

        cout << endl;
    }
}

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n = 5; 
    // for(int i = 0; i<2*n-1; i++){
    //     for(int j=0; j<2*n-1; j++){
    //         int top = i;
    //         int left = j;
    //         int right = (2*n - 2) - j;
    //         int down = (2*n - 2) - i;
    //         cout<<(n-min(min(top, down), min(left, right)))<<" ";
    //     }
    //     cout<<endl;
    // }

         for (int i = 0; i < 2 * n - 1; i++) {
        for (int j = 0; j < 2 * n - 1; j++) {
            int top = i;                      // Distance from the top
            int left = j;                     // Distance from the left
            int right = (2 * n - 2) - j;      // Distance from the right
            int down = (2 * n - 2) - i;       // Distance from the bottom

            // Find the smallest distance without using min()
            int smallest = top;
            if (left < smallest) smallest = left;
            if (right < smallest) smallest = right;
            if (down < smallest) smallest = down;

            // Calculate and print the value
            cout << (n - smallest) << " ";
        }
        cout << endl;
    }
}
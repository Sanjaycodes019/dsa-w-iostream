//reversing an array
#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int n) {
    int start = 0, end = n - 1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};  // Static Array
    int n = sizeof(arr)/sizeof(arr[0]);
    reverseArray(arr, n);

    for(int i = 0; i<n; i++){ 
        cout<<arr[i]<<" ";
    }
    return 0;
}
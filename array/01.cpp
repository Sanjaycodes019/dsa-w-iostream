// array: traversing and basic operations
// collection of elements (of the same data type) 
// stored in contiguous memory locations. 
// Arrays allow random access, i.e., you can directly access an element using its index.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5] = {1, 2, 3, 4, 5};  // Static Array
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
//Insert an element into a sorted array at the correct position while maintaining the sorted order.
#include<bits/stdc++.h>
using namespace std;

void insertSorted(int arr[], int& n, int element, int capacity) {
    if (n >= capacity) return;
    int pos = n;
    for (int i = 0; i < n; i++) {
        if (arr[i] > element) {
            pos = i;
            break;
        }
    }
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = element;
    n++;
    cout<<"The position is: "<<pos<<endl;
}

int main() {
    int arr[10] = {2, 5, 8, 12, 16};
    int n = 5;
    int capacity = 10;
    int element = 13;

    insertSorted(arr, n, element, capacity);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

//merge sort 
#include <bits/stdc++.h>
using namespace std;

void print_array(int array[], int left, int right) {
    for (int i = left; i <= right; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

void merge(int array[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Temporary arrays
    int Left[n1], Right[n2];

    // Copy data to temporary arrays
    for (int i = 0; i < n1; i++) {
        Left[i] = array[left + i];
    }
    for (int j = 0; j < n2; j++) {
        Right[j] = array[mid + 1 + j];
    }

    // Merge temporary arrays back into the original array
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (Left[i] <= Right[j]) {
            array[k++] = Left[i++];
        } else {
            array[k++] = Right[j++];
        }
    }

    // Copy remaining elements of Left[], if any
    while (i < n1) {
        array[k++] = Left[i++];
    }

    // Copy remaining elements of Right[], if any
    while (j < n2) {
        array[k++] = Right[j++];
    }
}

void mergeSort(int array[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        // Sort the first and second halves
        mergeSort(array, left, mid);
        mergeSort(array, mid + 1, right);

        // Merge the sorted halves
        merge(array, left, mid, right);
    }
}

int main() {
    int array[] = {24, 17, 13, 22, 19, 21, 16, 12};
    int array_size = sizeof(array) / sizeof(array[0]);

    cout << "Given array is:\n";
    print_array(array, 0, array_size - 1);

    mergeSort(array, 0, array_size - 1);

    cout << "\nSorted array is:\n";
    print_array(array, 0, array_size - 1);

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[low];

    int i = low + 1;
    int j = high;

    while (i <= j) {

        // Check the boundary BEFORE accessing arr[i]
        while (i <= high && arr[i] <= pivot) {
            i++;
        }

        // Check the boundary BEFORE accessing arr[j]
        while (j >= low + 1 && arr[j] > pivot) {
            j--;
        }

        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[low], arr[j]);
    return j;
}

void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);

        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

int main() {
    
    vector<int> arr = {10, 7, 8, 9, 1, 5};

    quickSort(arr, 0, arr.size() - 1);

    for (int num : arr)
        cout << num << " ";

    return 0;
}
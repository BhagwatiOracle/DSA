#include <bits/stdc++.h>
using namespace std;

void insertion_Sort(int arr[], int n, int i){

    if (i == n) return;

    int j = i;
    while(j>0 && arr[j-1]>arr[j]){
        int temp = arr[j];
        arr[j] = arr[j-1];
        arr[j-1] = temp;
        j--;
    }
    insertion_Sort(arr, n, i+1);
}

int main() {
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before Using Insertion Sort: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Call recursive insertion sort
    insertion_Sort(arr, n, 0);

    cout << "After Using Insertion Sort: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
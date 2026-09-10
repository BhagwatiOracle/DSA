#include<bits/stdc++.h>
using namespace std;

void secondLargest(int arr[], int n){

    int largest = INT_MIN;
    int second_largest = INT_MIN;

    for(int i=0; i<n; i++){
        if (arr[i] > largest){
            largest = arr[i];
        }
    }

    for(int i=0; i<n; i++){
        if (arr[i] > second_largest && arr[i] != largest){
            second_largest = arr[i];
        }
    }
    cout << "Second largest element is: " << second_largest << endl;
}

int main()
{
    // Initialize the array with elements
    int arr[] = {1, 2, 4, 6, 7, 5};
    
    // Calculate the size of the array
    int n = sizeof(arr) / sizeof(arr[0]);
    
    // Call the function to find and print the second largest element
    secondLargest(arr, n);

    return 0;
}
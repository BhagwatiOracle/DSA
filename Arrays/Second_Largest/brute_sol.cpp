#include<bits/stdc++.h>
using namespace std;

void getElement(int arr[], int n){

    sort(arr, arr+n);

    int large = arr[n-1];
    int second_large = arr[n-2];

    cout << "Largest Element: " << large << endl;
    cout << "Second Largest Element: " << second_large << endl;

}

int main()
{
    // Initialize the array with elements
    int arr[] = {1, 2, 4, 6, 7, 5};
    
    // Calculate the size of the array
    int n = sizeof(arr) / sizeof(arr[0]);
    
    // Call the function to find and print the second smallest and second largest elements
    getElement(arr, n);

    return 0;
}
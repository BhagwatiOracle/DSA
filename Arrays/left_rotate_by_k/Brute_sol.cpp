#include<bits/stdc++.h>
using namespace std;

void rotateLeft(int arr[], int n, int d){

    // Normalize d
    d = d % n;

    // Store d elements in temp array
    int temp[d];
    for(int i=0; i<d; i++){
        temp[i] = arr[i];
    }

    // Shift rest elements to left by d position
    for(int i=d; i<n; i++){
        arr[i-d]=arr[i];
    }

    //Put the stored elements in temp back to orignal array
    for(int i=n-d; i<n; i++){
        arr[i] = temp[i-(n-d)];
    }

}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n =sizeof(arr)/sizeof(arr[0]);
    int d = 3;
    rotateLeft(arr, n, d);
    for (int i = 0; i < n; i++) cout << arr[i] << " ";

    return 0;

}
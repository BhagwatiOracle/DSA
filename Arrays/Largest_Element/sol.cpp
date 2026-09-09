#include <bits/stdc++.h>
using namespace std;

int findLargestElement(int arr[], int n){
    int max = arr[0];
    for (int i = 0; i< n; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}


int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Largest Element is: " << findLargestElement(arr, n) << endl;
    return 0;
}

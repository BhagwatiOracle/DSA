#include<bits/stdc++.h>
using namespace std;

vector<int> rotateArray(vector<int> &arr, int n){
    int temp = arr[0];
    for(int i=0; i<n; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
    return arr;
}

int main(){
    vector<int> nums = {1,2,3,4,5};
    int n = nums.size();
    rotateArray(nums,n);
    for (int num : nums) {
        cout << num << " "; // Output the rotated array
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &arr, int n){
    int i = 0;
    for(int j=1; j<n; j++){
        if(arr[i] != arr[j]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
}

int main() {
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    int n = nums.size();
    int k = removeDuplicates(nums,n);

    cout << "Array after removing duplicates: ";
    for (int x = 0; x < k; x++) {
        cout << nums[x] << " ";
    }
    cout << endl;
}
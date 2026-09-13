#include <bits/stdc++.h>
using namespace std;

void moveZeroes(int n, vector<int>& a){
    int j = -1;
    for(int i = 0; i<n; i++){
        if(a[i] == 0){
            j = i;
            break;
        }
    }

    // no zero element
    if(j == -1) return;

    for(int i=j+1; i<n; i++){
        if(a[i] != 0){
            swap(a[i],a[j]);
            j++;
        }
    }




}


int main(){
    vector<int> nums = {0,1,0,3,12};
    int n = nums.size();

    moveZeroes(n,nums);

    // Print the result
    for (int num : nums) cout << num << " ";
    cout << endl;
}
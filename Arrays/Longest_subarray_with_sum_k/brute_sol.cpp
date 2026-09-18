#include <bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int> &nums, int k){
    int n = nums.size();
    int maxLength = 0;

    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=i; j<n; j++){
            sum += nums[j];
            if( sum == k){
                maxLength = max(maxLength,j=i+1);
            }

        }
        
    }
    return maxLength;
}

int main(){
    vector<int> a ={-1,1,1};
    int k = 1;
    int len = longestSubarray(a,k);
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int getLongestSubarray(vector<int>& a, int k){
    int n = a.size();

    int maxLen = 0;

    int left =0, right=0;

    int sum = a[0];
    while(right<n){
        while(left <= right && sum>k){
            sum -= a[left];
            left++;
        }
        if(sum == k){
            maxLen = max(maxLen, right-left+1);
        }
        right++;
        if (right<n){
            sum+=a[right];
        }
        
    }
    return maxLen;
}

int main() {
	vector<int> nums = {1,2,3,1,1,1,1,3,3};
    int k = 6;
    
	

	/* Function call to find the length
	of longest subarray having sum k */
	int ans = getLongestSubarray(nums, k);

	cout << "The length of longest subarray having sum k is: " << ans;

	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumk(vector<int> a, long long k){
    map<long,long> preSumMap;
    long long sum =0;
    int maxLen = 0;
    for(int i=0; i<a.size(); i++){
        sum += a[i];
        if(sum == k){
            maxLen = max(maxLen, i+1);
        }
        long long rem = sum -k;
        if(preSumMap.find(rem) != preSumMap.end()){
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }

        if(preSumMap.find(sum) == preSumMap.end()){ // unique el in hashmap
            preSumMap[sum] = i;
        }
    }
    return maxLen;
}

int main(){
    vector<int> a = { -1, 1, 1 };
    int k = 1;

    
    int len = longestSubarrayWithSumk(a, k);

    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}

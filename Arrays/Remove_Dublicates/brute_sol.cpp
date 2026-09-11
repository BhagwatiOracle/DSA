#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &nums){
    set<int> st;
    for (int i=0; i < nums.size(); i++){
        st.insert(nums[i]);
    }
    int index =0;
    for(auto i: st){
        nums[index]=i;
        index++;
    }
    return index;
}

int main() {
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};

    int k = removeDuplicates(nums);

    cout << "k = " << k << "\nArray after removing duplicates: ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
}

// Time Complexity = O(N) + O(N log(N))
// Space Complexity = O(N)
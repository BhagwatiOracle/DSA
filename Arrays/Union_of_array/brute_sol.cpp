#include <bits/stdc++.h>
using namespace std;

vector<int>findUnion(int arr1[], int arr2[], int n, int m){
    set<int> st;
    for(int i=0; i<n; i++){
        st.insert(arr1[i]);
    }

    for(int i=0; i<m; i++){
        st.insert(arr2[i]);
    }

    vector<int> temp;
    for(auto i: st){
        temp.push_back(i);
    }


    return temp;
}

int main(){
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[] = {2, 3, 4, 4, 5, 11, 12};
    int n = 10, m = 7;

    vector<int>result = findUnion(arr1,arr2,n,m);
    cout << "Union of arr1 and arr2 is: ";
    for (int val : result) {
        cout << val << " ";
    }
    return 0;
}
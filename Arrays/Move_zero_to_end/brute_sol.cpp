#include<bits/stdc++.h>
using namespace std;

vector<int> moveZeroes(int n, vector<int> a){

    //Step-1
    vector<int> temp;
    for(int i=0; i<n; i++){
        if (a[i] != 0){
            temp.push_back(a[i]);
        }
    }

    //Step-2
    int nz = temp.size();
    for(int i=0; i<nz; i++){
        a[i] = temp[i];
    }

    //Step-3
    for(int i=nz; i<n; i++){
        a[i] = 0;
    }

    return a;

}


int main(){
    vector<int> arr = {0, 1, 0, 3, 12};
    int n = arr.size();
    vector<int> result = moveZeroes(n,arr);

    // Print result
    cout << "Array after moving zeroes: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int missingNum(vector<int> &arr){
    int n = arr.size()+1;

    //create a hash array of size n
    vector<int> hash(n+1,0);

    //store fequencies of element
    for(int i=0; i<n-1; i++){
        hash[arr[i]]++;
    }

    // find the missing no
    for(int i=1; i<=n;i++){
        if (hash[i] == 0){
            return i;
        } 

    }

    return -1;
}


int main() {
    vector<int> arr = {8, 2, 4, 5, 3, 7, 1};
    int res = missingNum(arr);
    cout << res << endl;
    return 0;
}
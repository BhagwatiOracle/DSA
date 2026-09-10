#include<bits/stdc++.h>
using namespace std;

int secondLargest(vector<int> a, int n){
    if(n < 2)
        return -1;
    
    int large = INT_MIN, second_large = INT_MIN;
    for(int i=0; i<n; i++){
        if(a[i] > large){
            second_large = large;
            large = a[i];
        }
        else if (a[i] > second_large && a[i] != large){
            second_large = a[i];
        }
    }
    return second_large;
}

int secondSmallest(vector<int> a, int n){
    if (n < 2)
        return -1;
    int small = INT_MAX, second_small = INT_MAX;
    for(int i=0; i<n; i++){
        if(a[i] < small){
            second_small = small;
            small = a[i];
        }
        else if(a[i] < second_small && a[i] != small){
            second_small = a[i];
        }

    }
    return second_small;

}

vector<int> getSecondOrderElements(int n, vector<int> a){
    int slargest = secondLargest(a,n);
    int ssmallest = secondSmallest(a,n);
    return {slargest, ssmallest};
}

int main(){
    vector<int> a = {1, 2, 4, 6, 7, 5};
    int n = a.size();
    vector<int> result = getSecondOrderElements(n,a);
    cout << "Second largest element is: " << result[0] << endl;
    cout << "Second smallest element is: " << result[1] << endl;
    return 0;
}
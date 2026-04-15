//Find all pairs of elements whose sum is equal to a given number.

#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

void allPair(vector<int>& arr, int n, int k){
    unordered_set<int> pair;

    for(int i = 0; i < n; i++){
        int rem = k - arr[i];

        if(pair.find(rem) != pair.end()){
            cout << rem << " " << arr[i] << endl;
        }

        pair.insert(arr[i]);
    }
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    allPair(arr, n, k);

    return 0;
}

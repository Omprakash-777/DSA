// Merge two arrays into a third array.

#include<bits/stdc++.h>
using namespace std;

void mer_arr(vector<int>arr,vector<int>arr1){
    vector<int>arr3;
    for(auto i:arr){
        arr3.push_back(i);
    }
    for(auto i:arr1){
        arr3.push_back(i);
    }
    for(auto i:arr3){
        cout<<i<<" ";
    }
}



int main(){
    int n,m;
    cin>>n>>m;
    vector<int>arr(n);
    vector<int>arr1(m);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<m; i++){
        cin>>arr1[i];
    }

    mer_arr(arr, arr1);


    return 0;
}
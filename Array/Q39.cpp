// Find the union of two arrays.

#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>
using namespace std;

void UnionArr(vector<int>& arr, vector<int>& arr1, int n, int m){
    unordered_set<int>a;
    for(auto i:arr){
        a.insert(i);
    }
    for(auto i:arr1){
        a.insert(i);
    }

    vector<int>ans(a.begin(), a.end());

    sort(ans.begin(), ans.end());
    for(auto i:ans){
        cout<<i<<" ";
    }
}

void UnionArr1(vector<int>& arr, vector<int>& arr1, int n, int m) {
    int f=0,s=0;
    vector<int>ans;
    while(f<n && s<m){
        if(arr[f]<arr1[s]){
            if(ans.empty() || ans.back()!=arr[f]){
                ans.push_back(arr[f]);
            }
            f++;
        }else if(arr[f]>arr[s]){
            if(ans.empty() || ans.back()!=arr1[s]){
                ans.push_back(arr1[s]);
            }
            s++;
        }else{
            if(ans.empty() || ans.back() != arr[f])
                ans.push_back(arr[f]);
            f++;
            s++;
        }
    }
    while(f<n){
        if(ans.empty()|| ans.back()!=arr[f]){
            ans.push_back(arr[f]);
            f++;
        }
    }
    while(s<m){
        if(ans.empty()||ans.back()!=arr1[s]){
            ans.push_back(arr1[s]);
            s++;
        }
    }

    for(auto i:ans){
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
    
    // UnionArr(arr, arr1, n, m);    //array is not sorted
    UnionArr1(arr, arr1, n, m);        //array is sorted

    return 0;
}
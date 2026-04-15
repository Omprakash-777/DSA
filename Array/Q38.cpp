//Find the intersection of two arrays.
#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
using namespace std;

void intersectionArr(vector<int>& arr, vector<int>& arr1, int n, int m){

    unordered_map<int, int> fre;

    for(int i = 0; i < n; i++){
        fre[arr[i]]++;
    }

    for(int i = 0; i < m; i++){
        if(fre[arr1[i]] > 0){
            cout << arr1[i] << " ";
            // fre[arr1[i]]--;   
        }
    }
}

void intersectionArr1(vector<int>& arr, vector<int>& arr1, int n, int m){

    unordered_set<int> s(arr.begin(), arr.end());

    unordered_set<int> ans;

    for(int i = 0; i < m; i++){
        if(s.find(arr1[i]) != s.end()){
            ans.insert(arr1[i]);
        }
    }

    for(auto x : ans){
        cout << x << " ";
    }
}

void intersectionArr2(vector<int>& arr, vector<int>& arr1, int n, int m){
    if(n<0 || m<0) return;

    int f=0, s=0;
    while(f<n && f<m){
        if(arr[f]<arr1[s]) f++;
        else if(arr[f]>arr1[s]) s++;
        else{
            cout<<arr[f]<<" ";
            f++;
            s++;
        }
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
    
    // intersectionArr(arr, arr1, n, m);   
    intersectionArr1(arr, arr1, n, m);   
    // intersectionArr2(arr, arr1, n, m);       //arr is sorted

    return 0;
}
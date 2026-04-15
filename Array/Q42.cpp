// Find the element that appears only once while others appear twice.

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

void arrangeAlternate(vector<int>& arr, int n){
    unordered_map<int, int> fre;
    for(int i=0; i<n; i++){
        fre[arr[i]]++;
    }
    for(auto i:fre){
        if(i.second==1){
            cout<<i.first<<" ";
        }
    }
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    arrangeAlternate(arr, n);

    return 0;
}
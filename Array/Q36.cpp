//Rearrange array so that positive and negative numbers alternate.

#include<iostream>
#include<vector>
using namespace std;

void arrangeAlternate(vector<int>& arr, int n){
    vector<int>pos, neg;
    for(int i=0; i<n; i++){
        if(arr[i]>=0) pos.push_back(arr[i]);
        else neg.push_back(arr[i]);
    }

    int i=0, j=0, k=0;

    while(i<pos.size() && j<neg.size()){
        arr[k++]=pos[i++];
        arr[k++]=neg[j++];
    }
    while(i<pos.size()){
        arr[k++]=pos[i++];
    }
    while(j<neg.size()){
        arr[k++]=neg[j++];
    }

    for(auto i:arr){
        cout<<i<<" ";
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
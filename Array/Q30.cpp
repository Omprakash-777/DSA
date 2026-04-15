//Replace all zeroes with ones.

#include<iostream>
#include<vector>
using namespace std;

void replaceZero(vector<int>& arr, int n){
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            arr[i]=1;
        }
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
    replaceZero(arr, n);

    return 0;
}
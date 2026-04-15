//Find the difference between the largest and smallest element.

#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

void DiffLargeSmall(vector<int>& arr, int n){
    int maxi=INT_MIN;
    int mini=INT_MAX;

    for(int i=0; i<n; i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }else if(arr[i]<mini){
            mini=arr[i];
        }
    }
    cout<<maxi-mini;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    DiffLargeSmall(arr, n);

    return 0;
}
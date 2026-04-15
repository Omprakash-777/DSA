//Rotate an array by k positions to the right.

#include<iostream>
#include<vector>
using namespace std;

void swap_right(vector<int>& arr, int start, int end){
    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}


void rightRotateByK(vector<int>& arr, int n, int k){
    k=k%n;

    swap_right(arr, 0, n-k-1);
    swap_right(arr, n-k, n-1);
    swap_right(arr, 0, n-1);

    for(auto i:arr){
        cout<<i<<" ";
    }
}

int main(){
    int n, k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    rightRotateByK(arr, n, k);

    return 0;
}
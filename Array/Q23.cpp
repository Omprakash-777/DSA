// Reverse an array in place without using extra space

#include<iostream>
#include<vector>
using namespace std;

void reverseArr(vector<int>& arr, int n){
    int fir=0;
    int las=n-1;
    while(fir<las){
        swap(arr[fir], arr[las]);
        fir++;
        las--;
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

    reverseArr(arr, n);
    return 0;
}
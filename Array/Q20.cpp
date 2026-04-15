// find the second smallest element in an array
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

void secondSmall(vector<int>&arr, int n){
    int small=INT_MAX;
    int SecSmall=INT_MAX;
    for(int i=0; i<n; i++){
        if(arr[i]<small){
            SecSmall=small;
            small=arr[i];
        }else if(arr[i]<SecSmall && small!=arr[i]){
            SecSmall=arr[i];
        }
    }
    cout<<SecSmall;
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the value of arr: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    secondSmall(arr, n);
    return 0;
}
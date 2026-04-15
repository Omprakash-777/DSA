// find the sum of all elemests in an array

#include<bits/stdc++.h>
using namespace std;

void Sum_arr(int arr[], int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum +=arr[i];
    }
    
    cout<<"the sum of all elemests in an array: "<<sum;
}

int main(){
    int n;
    cout<<"Enter the Size of Arr: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the value of element: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    Sum_arr(arr, n);
    
    return 0;
}
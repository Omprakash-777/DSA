// Find the maximum minimum element in an array

#include<bits/stdc++.h>
using namespace std;

void check_arr(int arr[], int n){
    int maxi=INT_MIN;
    int mini=INT_MAX;
    for(int i=0; i<n; i++){
        if(maxi<=arr[i]){
            maxi=arr[i];
        }
        if(mini>=arr[i]){
            mini=arr[i];
        }
    }
    
    cout<<"the maximum element: "<<maxi<<"\n"<<"the minimum element: "<<mini;
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
    check_arr(arr, n);
    
    return 0;
}
//Find the smallest three elements in an array.

#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

void SmallThree(vector<int>& arr, int n){

    if(n < 3){
        cout << "Not enough elements";
        return;
    }
    
    int maxi=INT_MAX;
    int secMaxi=INT_MAX;
    int thiMaxi=INT_MAX;
    
    for(int i=0; i<n; i++){
        if(arr[i]<maxi){
            thiMaxi=secMaxi;
            secMaxi=maxi;
            maxi=arr[i];
        }else if(arr[i]<secMaxi && arr[i]!=maxi){
            thiMaxi=secMaxi;
            secMaxi=arr[i];
        }else if(arr[i]<thiMaxi && arr[i]!=secMaxi && arr[i]!=maxi){
            thiMaxi=arr[i];
        }
    }

    cout<<maxi<<" "<<secMaxi<<" "<<thiMaxi;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    SmallThree(arr, n);

    return 0;
}
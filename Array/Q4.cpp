// Search for a given element (linear search).

#include<bits/stdc++.h>
using namespace std;

void search_arr(int arr[], int n){
    int ele;
    cout<<"Enter the target value: ";
    cin>>ele;
    for(int i=0; i<n; i++){
        if(arr[i]/ele==1){
            cout<<"the index of target value: "<<i;
            break;
        }
    }
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
    search_arr(arr, n);
    
    return 0;
}
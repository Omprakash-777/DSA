// copy element from one array to another


#include<bits/stdc++.h>
using namespace std;

// void copy_arr(vector<int>& arr, int n){
//     vector<int>new_arr;
//     for(int i:arr){
//         new_arr.push_back(i);
//     }
//     cout<<"New array: ";
//     for(int i: new_arr){
//         cout<<i<<" ";
//     }

// }

// int main(){
//     int n,val;
//     cout<<"Enter the Size of Arr: ";
//     cin>>n;
//     vector<int>arr;
//     cout<<"Enter the value of element: ";
//     for(int i=0; i<n; i++){
//         cin>>val;
//         arr.push_back(val);
//     }
//     copy_arr(arr, n);
    
//     return 0;
// }


void copy_arr(int arr[], int n){
    int arr1[n];
    for(int i=0; i<n; i++){
        arr1[i]=arr[i];
    }
    cout<<"New arr: ";
    for(int i=0; i<n; i++){
        cout<<arr1[i]<<" ";
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
    copy_arr(arr, n);
    
    return 0;
}
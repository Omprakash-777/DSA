// find the index of the last occurrence of a given element.

#include<iostream>
#include<vector>
using namespace std;

int occurrence(vector<int>&arr, int n, int k){
    int last_index=0;
    bool check=false;
    for(int i=0; i<n; i++){
        if(arr[i]==k){
            last_index=max(last_index, i);
            check=true;
        }
    }
    return (check?last_index:-1);
}

int occurrence1(vector<int>&arr, int n, int k){
    int last_index;
    for(int i=n; i>=0; i--){
        if(arr[i]==k){
            last_index=i;
            break;
        }
        last_index=-1;

    }
    return last_index;
}

int main(){
    int n,k;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the value of Target Element: ";
    cin>>k;
    vector<int>arr(n);
    cout<<"Enter the value of arr: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    // cout<<"the index of the last occurence of a given element: "<<occurrence(arr, n, k);
    cout<<"the index of the last occurence of a given element: "<<occurrence1(arr, n, k);
    return 0;
}
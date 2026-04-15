// shift all elements to the left by one position

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the value of arr: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int fv=arr[0];
    for(int i=0; i<n; i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=fv;

    cout<<"shifted element to the left  by 1: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
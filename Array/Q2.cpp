// Find the average of array elemeats

#include<bits/stdc++.h>
using namespace std;

void aver_arr(int arr[], int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum +=arr[i];
    }
    int aver=sum/n;
    cout<<"the average of array elemeats: "<<aver;
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
    aver_arr(arr, n);
    
    return 0;
}
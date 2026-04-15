// count the occurrences of a specific element

#include<bits/stdc++.h>
using namespace std;

void count_arr(int arr[], int n){
    int count=0;
    int occ;
    cout<<"Enter the specific element: ";
    cin>>occ;
    for(int i=0; i<n; i++){
        if(arr[i]%occ==0){
            count++;
        }
    }

    cout<<"the occurences of specific elemests in an array: "<<count;
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
    count_arr(arr, n);
    
    return 0;
}
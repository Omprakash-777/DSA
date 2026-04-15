// Check if an array contain a give number

#include<bits/stdc++.h>
using namespace std;

void check_arr(int arr[], int n){
    int occ;
    cout<<"Enter the specific element: ";
    cin>>occ;
    int check=0;
    for(int i=0; i<n; i++){
        if(arr[i]&occ){
            check=1;
        }
    }
    if(check) cout<<"Element Found!";
    else cout<<"Element not Found!";

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
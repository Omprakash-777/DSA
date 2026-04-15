// Count how many element are even or how many are odd.

#include<bits/stdc++.h>
using namespace std;

void count_arr(int arr[], int n){
    int even_count=0;
    int odd_count=0;
    for(int i=0; i<n; i++){
        if(i%2==0) even_count++;
        else odd_count++;
    }
    
    cout<<"The count of even element: "<<even_count<<endl;
    cout<<"The count of odd element: "<<odd_count;
    
    
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
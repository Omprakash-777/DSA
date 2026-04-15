// Replace all occerrences of a spesific element with another no.

#include<bits/stdc++.h>
using namespace std;

void count_arr(int arr[], int n){
    int occ,cha;
    cout<<"Enter the specific element: ";
    cin>>occ;
    cout<<"Enter the element another no. that we set occerrance value: ";
    cin>>cha;
    for(int i=0; i<n; i++){
        if(arr[i]%occ==0){
            arr[i]=cha;
        }
    }
    cout<<"The new array: ";
   for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
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
    count_arr(arr, n);
    
    return 0;
}
// shift all element to the right by one position

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
    int lv=arr[n-1];
    for(int i=n-1; i>0; i--){
        arr[i]=arr[i-1];
    }
    arr[0]=lv;

    // vector<int>dub=arr;
    // for(int i=1; i<n; i++){
    //     arr[i]=dub[i-1];
    // }
    // arr[0]=dub[n-1];

    cout<<"shifted element to the right by 1: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
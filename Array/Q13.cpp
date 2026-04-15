// Find the index of the first occurrence of a given element

#include<iostream>
#include<vector>

using namespace std;

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
    int index;
    for(int i=0; i<n; i++){
        if(arr[i]==k){
            index=i;
            break;
        }
        index=-1;
    }
    cout<<"The index of the first occurence of a given element: "<<index;
    return 0;
}
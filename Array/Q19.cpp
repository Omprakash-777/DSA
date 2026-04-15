// find the second largest element in an array

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

void secondLar(vector<int>&arr, int n){
    int lar=INT_MIN;
    int secL=INT_MIN;
    for(auto i:arr){
        if(i>lar){
            secL=lar;
            lar=i;
        }
        else if(i>secL && lar!=i){
            secL=i;
        }
    }
    cout<<secL;
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the value of arr: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    secondLar(arr, n);

    return 0;
}
    

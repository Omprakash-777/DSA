//Move all zeroes to the end without changing order of other elements.

#include<iostream>
#include<vector>
using namespace std;

void moveZero(vector<int>& arr, int n){
    int count=0;
    int c=0;
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            count++;
        }
        else{
            arr[c]=arr[i];
            c++;
        }
    }
    for(int i=0; i<count; i++){
        arr[c]=0;
        c++;
    }
    for(auto i:arr){
        cout<<i<<" ";
    }

}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    moveZero(arr, n);

    return 0;
}
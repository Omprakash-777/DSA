// Remove duplicates from an array
#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>
using namespace std;

void RemDup(vector<int>&arr, int n){
    int i=0;
    sort(arr.begin(), arr.end());
    for(int j=1; j<n; j++){
        if(arr[j]!=arr[i]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    arr.resize(i+1);

    for(auto i:arr){
        cout<<i<<" ";
    }

}

void RemDup1(vector<int>&arr, int n){
    unordered_set<int>tra;
    vector<int>ans;
    for(auto i:arr){
        if(tra.find(i)==tra.end()){
            tra.insert(i);
            ans.push_back(i);
        }
    }
    for(auto i:ans){
        cout<<i<<" ";
    }
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
    
    // RemDup(arr, n);
    RemDup1(arr, n);

    return 0;
}







// 10
// 4 8 9 4 5 2 1 0 2 2
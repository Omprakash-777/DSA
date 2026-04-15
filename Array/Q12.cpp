// Compare teo arrays for equality

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter the size of First array: ";
    cin>>n;
    cout<<"Enter the size of First array: ";
    bool check=true;

    if(n!=m){
        check=false;
    }

    vector<int>arr1(n),arr2(m);

    cout<<"Enter Value of first Array: ";
    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }

    cout<<"Enter Value of second Array: ";
    for(int i=0; i<m; i++){
        cin>>arr2[i];
    }

    for(int i=0; i<n; i++){
        if(arr1[i]==arr2[i]){
            check=true;
        }
        else{
            check=false;
            break;
        }
    }
    cout<<"Check Equality: "<<(check?"Equal":"Not Equal");
    return 0;
}
//Count the number of sub arrays with a given sum.

#include<iostream>
#include<vector>
#include<map>
using namespace std;

int longestSubarray(vector<int>& arr, int k) {
        int max_len = 0;
        int n = arr.size();

        
        for (int i = 0; i < n; i++) {
            int current_sum = 0; 
            for (int j = i; j < n; j++) {
                current_sum += arr[j];
                
                if (current_sum == k) {
                    max_len = max(max_len, j - i + 1);
                }
            }
        }
        return max_len;
    }


int longestSubarray1(vector<int>& arr, int k) {
        int max_len = 0;
        map<int, int>presum;
        long long sum=0;
        for(int i=0; i<arr.size(); i++){
            sum+=arr[i];
            if(sum==k){
                max_len=max(max_len, i+1);
            }
            
            int rem=sum-k;
            if(presum.find(rem)!=presum.end()){
                int len=i-presum[rem];
                max_len=max(max_len, len);
            }
            if(presum.find(sum)==presum.end()){
                presum[sum]=i;
            }
        }
        return max_len;
    }
    

int longestSubarray2(vector<int> &arr, int k){
        int max_len = 0;
        int left=0, right=0;
        int sum=arr[0];
        int n=arr.size();
        while(right<n){
            while(left<=right && sum>k){
                sum-=arr[left];
                left++;
            }
            if(sum==k){
                max_len=max(max_len, right-left+1);
            }
            right++;
            if(right<n)sum += arr[right];
        }
        
        return max_len;
    }


int main(){
    int n, k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // cout<<longestSubarray(arr, k);   //brute force
    // cout<<longestSubarray1(arr, k);    //optimal
    cout<<longestSubarray2(arr, k);     //for only positive

    return 0;
}
class Solution {
public:
    long long minCost(vector<int>& arr, vector<int>& brr, long long k) {
        long long bns = 0;
        int n = arr.size();
        for(int i=0;i<n;i++){
            bns+=abs(arr[i]-brr[i]);
        }
        sort(arr.begin(),arr.end());
        sort(brr.begin(),brr.end());
        long long ans = 0;
        
        for(int i=0;i<n;i++){
            ans+=abs(arr[i]-brr[i]); 
        }
        return min(bns,ans+k);
    }
};
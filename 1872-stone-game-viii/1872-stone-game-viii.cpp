class Solution {
public:
    int func(int i, vector<int>& prefix,vector<int>& dp){
        int n = prefix.size();
        if(i==n-1) return prefix[n-1];
        if(dp[i]!=-1) return dp[i];
        int take = prefix[i]-func(i+1,prefix,dp);
        int skip=func(i+1,prefix,dp);
        return dp[i]=max(take,skip);
    }


    int stoneGameVIII(vector<int>& stones) {
        int n = stones.size();
        vector<int> prefix(n);
        vector<int> dp(n,-1);
        prefix[0]=stones[0];
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+stones[i];
        }
        dp[n-1]=prefix[n-1];
        for(int i=n-2;i>=1;i--){
            int take = prefix[i]-dp[i+1];
            int skip=dp[i+1];
            dp[i]=max(take,skip);
        }
        return dp[1];
    }
};
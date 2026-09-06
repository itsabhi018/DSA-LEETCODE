class Solution {
public:
    int func (int idx1, int idx2, string s, string t,vector<vector<int>>& dp){
        if(idx2==0) return 1;
        if(idx1==0) return 0;
        if(dp[idx1][idx2]!=-1) return dp[idx1][idx2];
        if(s[idx1-1]==t[idx2-1]){
            return dp[idx1][idx2] = func(idx1-1,idx2-1,s,t,dp) + func(idx1-1,idx2,s,t,dp);
        }
        return dp[idx1][idx2] = func(idx1-1,idx2,s,t,dp);
    }
    int numDistinct(string s, string t) {
        int n = s.size();
        int m = t.size();
        vector<double> prev(m+1,0) , curr(m+1,0);
        curr[0]=prev[0]=1;
        for(int idx1=1;idx1<=n;idx1++){
            for(int idx2=1;idx2<=m;idx2++){
                if(s[idx1-1]==t[idx2-1]){
                    curr[idx2] = prev[idx2-1] + prev[idx2];
                }
                else curr[idx2] = prev[idx2];
            }
            prev=curr;
        }
        return (int)prev[m];
    }
};
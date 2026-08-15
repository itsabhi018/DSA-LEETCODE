class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int x=0;
        int n = nums.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            x=x^nums[i];
            if(nums[i]==0) cnt++;
        }
        if(cnt==n) return 0;
        if(x!=0) return n;
        return n-1;
        
    }
};
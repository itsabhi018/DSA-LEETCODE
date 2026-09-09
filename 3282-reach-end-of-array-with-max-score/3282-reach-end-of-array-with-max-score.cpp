class Solution {
public:
    long long findMaximumScore(vector<int>& nums) {
        long long ans=0;
        int n = nums.size();
        int curr = 0;
        for(int i=1;i<n;i++){
            if(nums[i]>nums[curr]) {
                ans+=1LL*(i-curr)*nums[curr];
                curr=i;
            }
        }
        ans+=1LL*(n-1-curr)*nums[curr];
        return ans;
    }
};
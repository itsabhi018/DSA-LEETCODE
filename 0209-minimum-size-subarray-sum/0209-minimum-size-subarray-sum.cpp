class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        long long sum = 0;
        int n = nums.size();
        int left=0;
        int right=0;
        int mini=1e9;
        while(right<n){
            sum+=nums[right];
            while(sum>=target){
                mini=min(mini,right-left+1);
                sum-=nums[left];
                left++;
            }
            right++;
        }
        return mini==1e9 ? 0 : mini;
    }
};
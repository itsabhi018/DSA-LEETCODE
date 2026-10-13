class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0) nums[i]= -1*nums[i];
        }
        sort(nums.begin(),nums.end());
        long long ans=0;
        for(int i=n-1;i>=0;i--){
            if(i>=n/2)ans+=nums[i]*nums[i];
            else ans-=nums[i]*nums[i];
        }  
        return ans;  
    }
};
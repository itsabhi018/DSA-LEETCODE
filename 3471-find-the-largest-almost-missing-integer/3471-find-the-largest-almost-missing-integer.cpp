class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        map<int,int> mpp;
        for(auto& it : nums) mpp[it]++;
        if(k==n) return *max_element(nums.begin(),nums.end());
        else if(k==1){
            for(auto it = mpp.rbegin();it != mpp.rend(); it++){
                if(it->second==1){
                    return it->first;
                }
            }
        }
        else {
            int freq1=0;
            int freq2=0;
            for(auto& it:mpp){
                if(it.first==nums[0]) freq1=it.second;
                if(it.first==nums[n-1]) freq2=it.second;
            }
            if(freq1==1 && freq2==1) return max(nums[0],nums[n-1]);
            else if(freq1>1 && freq2==1) return nums[n-1];
            else if(freq1==1 && freq2>1) return nums[0];
            else return -1;
        }
        return -1;
    }
};
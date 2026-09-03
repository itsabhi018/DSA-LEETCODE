class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(int num : nums) mpp[num]++;
        int n = nums.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(mpp[nums[i]]>1 || mpp.find(nums[i]+1)!=mpp.end() || mpp.find(nums[i]-1)!=mpp.end()) continue;
            ans.push_back(nums[i]);
        }
        return ans;
        
    }
};
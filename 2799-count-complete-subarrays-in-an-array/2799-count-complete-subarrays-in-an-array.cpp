class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int n = nums.size();
        set<int> st(nums.begin(),nums.end());
        int cnt=0;
        int m = st.size();
        for(int i=0;i<n;i++){
            set<int> st1;
            for(int j=i;j<n;j++){
                st1.insert(nums[j]);
                if(st1.size()==m) cnt++;
            }
        }
        return cnt;

    }
};
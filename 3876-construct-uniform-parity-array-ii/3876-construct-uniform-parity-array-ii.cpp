class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();
        vector<int> even;
        vector<int> odd;
        for(int i=0;i<n;i++){
            if(nums1[i]%2==0) even.push_back(nums1[i]);
            else odd.push_back(nums1[i]);
        }
        int a = even.size();
        int b = odd.size();
        if(a==n || b==n) return true;
        sort(odd.begin(),odd.end());
        int ele = odd[0];
        for(int i=0;i<a;i++){
            if(even[i]-ele < 1) return false;
        }
        return true;
    }
};
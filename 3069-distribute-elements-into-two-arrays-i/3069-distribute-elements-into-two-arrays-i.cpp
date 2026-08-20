class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr1;
        vector<int> arr2;
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);
        int n = nums.size()-2;
        int idx=2;
        while(n!=0){
            if(arr1.back()>arr2.back()){
                arr1.push_back(nums[idx]);
                idx++;
            }
            else{
                arr2.push_back(nums[idx]);
                idx++;
            }
            n--;
        }
        arr1.insert(arr1.end(),arr2.begin(),arr2.end());
        return arr1;
    }
};
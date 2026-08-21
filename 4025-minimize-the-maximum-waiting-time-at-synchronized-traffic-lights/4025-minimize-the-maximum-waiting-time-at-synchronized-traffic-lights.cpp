class Solution {
public:
    int minPenalty(int period, vector<int>& lights, vector<int>& arrivalTime) {
        int maxi = *max_element(lights.begin(),lights.end()); 
        int m = lights.size();
        int n = arrivalTime.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int mod = arrivalTime[i]%period;
            if(mod>=maxi) ans=max(ans,period-mod);
        }
        return ans;
    }
};
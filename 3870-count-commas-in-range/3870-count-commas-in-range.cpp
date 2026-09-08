class Solution {
public:
    int countCommas(int n) {
        int ans=0;
        for(int i=1;i<=n;i++){
            string str = to_string(i);
            int m = str.size();
            if(m>=4) ans+=(m-1)/3;
        }
        return ans;
    }
};
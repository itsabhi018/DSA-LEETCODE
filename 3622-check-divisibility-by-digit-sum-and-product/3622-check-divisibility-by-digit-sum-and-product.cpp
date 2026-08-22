class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int prod=1;
        int m = n;
        while(n>0){
            int mod = n%10;
            sum+=mod;
            prod*=mod;
            n=n/10;
        }
        return m%(sum+prod)==0;
    }
};
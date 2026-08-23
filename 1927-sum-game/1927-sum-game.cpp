class Solution {
public:
    bool sumGame(string num) {
        int lSum = 0;
        int rSum=0;
        int lQmark=0;
        int rQmark=0;
        int n = num.size();
        for(int i=0;i<n;i++){
            if(num[i]=='?'){
                if(i<n/2){
                    lQmark++;
                }
                else{
                    rQmark++;
                }
            }
            else{
                if(i<n/2){
                    lSum+=num[i]-'0';
                }
                else {
                    rSum+=num[i]-'0';
                }
            }
        }
        int totalQmark = lQmark+rQmark;
        if(totalQmark%2 != 0) return true;
        int left = 2*lSum + 9*lQmark;
        int right = 2*rSum + 9*rQmark;
        if(left==right) return false;
        else return true;
    }
};
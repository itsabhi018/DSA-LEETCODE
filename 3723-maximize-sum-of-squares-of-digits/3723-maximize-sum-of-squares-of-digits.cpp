class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if(sum>9*num) return "";
        string str = "";
        while(num--){
            if(sum>9) {
                str.push_back('9');
                sum-=9;
                continue;
            }
            else if (sum<10 && sum>0) {
                char c =char('0'+sum);
                str.push_back(c);
                sum=0;
                continue;
            }
            else {
                str.push_back('0');
                continue;
            }
            
        }
        return str;
    }
};
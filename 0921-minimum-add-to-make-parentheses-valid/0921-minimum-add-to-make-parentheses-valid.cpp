class Solution {
public:
    int minAddToMakeValid(string s) {
        int cnt = 0;
        int req = 0;
        for (char c : s) {
            if (c == '(') cnt++;
            else cnt>0 ? cnt-- : req++;
        }
        return cnt+req;
    }
};
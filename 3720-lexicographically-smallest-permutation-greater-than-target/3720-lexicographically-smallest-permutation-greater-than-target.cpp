class Solution {
public:
    string result="";

    bool func(string s, string target, string curr,vector<int>& freq, int idx, bool greater){
        int n = s.size();

        if(idx==n){
            if(greater){
                result=curr;
                return true;
            }
            return false;
        }

        for(char ch='a';ch<='z';ch++){

            if(freq[ch-'a']==0) continue;
            if(greater==false && ch<target[idx]) continue;

            curr.push_back(ch);
            freq[ch-'a']--;
            
            bool isGreater = greater || ch>target[idx];

            if(func(s,target,curr,freq,idx+1,isGreater)) return true;

            curr.pop_back();
            freq[ch-'a']++;

        }
        return false;
    }
    string lexGreaterPermutation(string s, string target) {
        vector<int> freq(26,0);
        int n = s.size();
        for(int i=0;i<n;i++){
            freq[s[i]-'a']++;
        }
        string curr="";
        func(s,target,curr,freq,0,false);
        return result;
    }
};
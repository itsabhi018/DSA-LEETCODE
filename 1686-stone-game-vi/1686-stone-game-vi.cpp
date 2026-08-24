class Solution {
public:
    int stoneGameVI(vector<int>& aliceValues, vector<int>& bobValues) {
        int n = aliceValues.size();
        vector<pair<int,int>> arr(n);
        for(int i=0;i<n;i++){
            arr[i]={aliceValues[i]+bobValues[i],i};
        }
        sort(arr.rbegin(),arr.rend());
        int alice=0;
        int bob=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                alice=alice+arr[i].first-bobValues[arr[i].second];
            }
            else{
                bob=bob+arr[i].first-aliceValues[arr[i].second];
            }
        }
        if(alice>bob) return 1;
        else if(alice<bob) return -1;
        else return 0;
    }
};
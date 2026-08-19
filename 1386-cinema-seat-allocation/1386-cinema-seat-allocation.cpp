class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        int a = reservedSeats.size();
        
        int ans = 0;
        
         
         map<int,set<int>> m;
         

         for(auto n :reservedSeats){
            m[n[0]-1].insert(n[1]-1);
         }

          for(auto n: m){
              auto s = n.second;
              
              int count = 0;
              for(int i = 1;i<10;i++){
                if(count==4) {
                    ans++;
                    count =0;
                }
                
                if(s.find(i)==s.end() && count==0 && (i==1 || i==3 || i==5) ) {
                    count++;
                    s.insert(i);
                }
                else if(s.find(i)==s.end() && count>0){
                    count++;
                    s.insert(i);
                }
                else {
                    
                    count  = 0;
                }
              }
              if(count == 4)
                 ans++;
          }

        



          return ans+=(n-m.size())*2;
      
        
    }
};
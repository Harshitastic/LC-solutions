class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n=cost.size();
        sort(cost.begin(),cost.end());
        long long ans=0;
        int i=n-1;
        int cnt=0;
        while(i>=0){
            cnt++;
            ans+=cost[i];
            
            if(cnt==2){
                cnt=0;
                i-=2;
            }
            else{
                i--;
            }
            
            
        }
        return ans;


























    }
};
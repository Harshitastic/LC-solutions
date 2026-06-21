class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int n=costs.size();
        sort(costs.begin(),costs.end());
        int t=0;
        int ans=0;
        for(int i=0;i<n;i++){
            t+=costs[i];
            
            if(t>coins) break;
            ans++;

        }
        return ans;
    }
};
class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int ans = 200;
        for(vector<int> a : tasks)
            ans = min(ans, a[0]+a[1]);
        return ans;

        
    }
};
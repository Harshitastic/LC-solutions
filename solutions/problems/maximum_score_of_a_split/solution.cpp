class Solution {
public:
    long long maximumScore(vector<int>& nums) {
        int n=nums.size();
        vector<long long> pre(n);
        pre[0]=nums[0];
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+nums[i];
        }
        long long maxx=INT_MIN;

        int mini=nums[n-1];
        for(int i=n-2;i>=0;i--){
            mini=min(mini,nums[i+1]);
            maxx=max(maxx,pre[i]-mini);
        }
        return maxx;
        
    }
};
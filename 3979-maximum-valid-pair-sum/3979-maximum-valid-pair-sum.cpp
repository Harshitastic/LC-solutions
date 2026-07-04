class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int n=nums.size();
        int best=INT_MIN;
        int ans=INT_MIN;
        for(int i=k;i<n;i++){
            best=max(best,nums[i-k]);
            ans=max(ans,best+nums[i]);

        }
        return ans;
    }
};
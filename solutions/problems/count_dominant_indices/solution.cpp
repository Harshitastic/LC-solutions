class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        int n=nums.size();
        vector<int> pre(n);
        pre[0]=nums[0];
        for(int i=1;i<n;i++) pre[i]=pre[i-1]+nums[i];
        int cnt=0;
        for(int i=0;i<n-1;i++){
            int sum=(pre[n-1]-pre[i]);
            if(nums[i]*(n-i-1)>sum) cnt++;
        }
        return cnt;
    }
};
class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];

        }
        int dem=n;
        int cnt=0;
        for(int i=0;i<=n-2;i++){
            sum-=nums[i];
            dem--;
            if(nums[i]>sum/dem) cnt++;
            
        }
        return cnt;
        
    }
};
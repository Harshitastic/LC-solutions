class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int n=nums.size();
        int ans=1e9;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==3 ){
                    ans=min(ans,abs(i-j));
                }
            }
        }
        if(ans==1e9) ans=-1;
        return ans;
        
    }
};
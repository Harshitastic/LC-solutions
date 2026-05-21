class Solution {
public:
    int minimumPrefixLength(vector<int>& nums) {
        
        int ans=0;
        for(int i=nums.size()-1;i>0;i--){
            if(nums[i]<=nums[i-1]){
                ans=i;
                break;
            }
        }
        return ans;
        
    }
};
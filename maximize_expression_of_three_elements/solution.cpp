class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {
        sort(nums.rbegin(),nums.rend());
        int n=nums.size();
        int ans=nums[0]+nums[1]-nums[n-1];
        return ans;
        
    }
};
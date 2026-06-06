class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        int total=0;
        for(auto x:nums) total+=x;
        int lsum=0;
        int rsum=total;
        vector<int> ans;
        for(int i=0;i<n;i++){
            total-=nums[i];
            rsum=total;
            ans.push_back(abs(lsum-rsum));
            lsum+=nums[i];
        }
        return ans;
    }
};
class Solution {
public:
    int func(int l,int r,vector<int>& nums){
        if(l==r) return nums[l];
        int left=nums[l]-func(l+1,r,nums);
        int right=nums[r]-func(l,r-1,nums);
        return max(left,right);
    }
    bool predictTheWinner(vector<int>& nums) {
        return func(0,nums.size()-1,nums)>=0;
    }

};
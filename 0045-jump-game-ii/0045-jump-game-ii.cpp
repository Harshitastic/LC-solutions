class Solution {
public:
    int jump(vector<int>& nums) {
        int ans=0,end=0,max_idx=0;
        for(int i=0;i<nums.size()-1;i++){
            max_idx=max(max_idx,nums[i]+i);
            if(i==end){
                ans++;
                end=max_idx;
            }
        }
        return ans;

    }
};
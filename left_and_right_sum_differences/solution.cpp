class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        int new_sum=0;
        vector<int> ans;
        for(int i=0;i<n;i++){
            
            int left=new_sum;
            int right=sum-new_sum-nums[i];
            ans.push_back(abs(left-right));
            new_sum+=nums[i];
           

        }
        return ans;
        
    }
};
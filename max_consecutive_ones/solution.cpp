class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int length=0;
        int ans=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                length++;
                

            }
            else{
                ans=max(ans,length);
                length=0;
            }
        }
        ans=max(ans,length);
        return ans;
        
    }
};
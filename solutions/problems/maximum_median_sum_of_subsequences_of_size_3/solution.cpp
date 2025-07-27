class Solution {
public:
    long long maximumMedianSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int pointer=nums.size();
        int m=nums.size()/3;
        int n=nums.size();
        long long sum=0;
        while(m--){
            
            pointer-=2;
            sum+=nums[pointer];
            
            
        }
        return sum;
        
    }
};
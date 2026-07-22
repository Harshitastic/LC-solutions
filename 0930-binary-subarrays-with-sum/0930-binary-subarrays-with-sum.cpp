class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int>psum;
        int cnt=0,sum=0;
        psum[0]=1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(psum.find(sum-goal)!=psum.end()) cnt+=psum[sum-goal];
            psum[sum]++;


        }
        return cnt;
        
    }
};
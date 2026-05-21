class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int> mpp;
        mpp[0]=1;
        int presum=0,cnt=0;
        for(int i=0;i<nums.size();i++){
            presum+=nums[i];
            int s=presum-k;
            cnt+=mpp[s];
            mpp[presum]++;

        }
        return cnt;
        
    }
};
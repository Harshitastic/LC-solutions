class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        map<int,int> freq;
        for(auto it:nums){
            freq[it]++;
        }
        int ans=0;

        for(auto it:freq){
            if(it.second%k==0){
                ans+=it.first*it.second;
            }
        }
        return ans;
        
    }
};
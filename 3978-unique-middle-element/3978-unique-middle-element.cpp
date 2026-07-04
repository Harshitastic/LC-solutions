class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n=nums.size();
        map<int,int>mpp;
        for(auto it:nums) mpp[it]++;
        int mid=n/2;
        if(mpp[nums[mid]]>1) return false;
        else return true;
    }
};
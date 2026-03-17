class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;

        }
        int ans=-1;
        for(auto it : freq){
            if(it.second>=( (nums.size()*1.0)/2)){
                ans=it.first;

            }
        }
        return ans;
    }
};
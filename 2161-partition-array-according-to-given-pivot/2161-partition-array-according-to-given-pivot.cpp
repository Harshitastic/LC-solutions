class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> small;
        vector<int> large;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==pivot) cnt++;
            if(nums[i]<pivot) small.push_back(nums[i]);
            if(nums[i]>pivot) large.push_back(nums[i]);
            
        }
        vector<int> ans;
        for(int i=0;i<small.size();i++){
            ans.push_back(small[i]);
        }
        for(int i=0;i<cnt;i++){
            ans.push_back(pivot);
        }
        for(int i=0;i<large.size();i++){
            ans.push_back(large[i]);
        }
        return ans;
    }
};
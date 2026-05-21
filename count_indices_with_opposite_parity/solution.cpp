class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        int odd=0,even=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0) even++;
            else odd++;
        }
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                ans.push_back(odd);
                even--;
            }
            else{
                ans.push_back(even);
                odd--;
            }
        }
        return ans;

        
    }
};
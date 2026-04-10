class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long maxx=0,max_element=0,max_diff=0;
        for(int i=0;i<nums.size();i++){
            long long x=nums[i];
            maxx=max(maxx,max_diff*nums[i]);
            max_diff=max(max_diff,max_element-x);
            max_element=max(max_element,x);
            
        }
        return maxx;
        
    }
};
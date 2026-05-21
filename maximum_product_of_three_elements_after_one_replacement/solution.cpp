class Solution {
public:
    long long maxProduct(vector<int>& nums) {
        long long n=nums.size();
        sort(nums.begin(),nums.end());
        long long a=100000LL*nums[n-1]*nums[n-2];
        long long b=100000LL*nums[0]*nums[1];
        long long c=-100000LL*nums[0]*nums[n-1];
        return max({a,b,c});


        

        
    }
};
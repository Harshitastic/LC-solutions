class Solution {
public:
    int func(vector<int>& nums,int k){
        int l=0,r=0,ans=0,odd=0;
        while(r<nums.size()){
            if(nums[r]&1) odd++;
            while(odd>k){
                if(nums[l]&1) odd--;
                l++;
            }
            ans+=(r-l+1);
            r++;

        }
        return ans;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return func(nums,k)-func(nums,k-1);
    }
};
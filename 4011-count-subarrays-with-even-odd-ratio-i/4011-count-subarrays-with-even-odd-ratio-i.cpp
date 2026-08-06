class Solution {
public:
    int countRatioSubarrays(vector<int>& nums, int a, int b) {
        int ans=0;
       for(int l=0;l<nums.size();l++){
            int even=0,odd=0;
            for(int r=l;r<nums.size();r++){
                if(nums[r]&1) odd++;
                else even++;
                if(odd>0 && even*b<=odd*a){
                    ans++;
                }
            }
       }
       return ans;
    }
};
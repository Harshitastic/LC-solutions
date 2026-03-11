class Solution {
public:
    int countElements(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int cnt=0;
        int n=nums.size();

        for(int i=0;i<n;i++){
            int pos=upper_bound(nums.begin(),nums.end(),nums[i]) - nums.begin();
            if(n-pos>=k) cnt++;
        }

        if(k==0) cnt=n;
        return cnt;

        
    }
};
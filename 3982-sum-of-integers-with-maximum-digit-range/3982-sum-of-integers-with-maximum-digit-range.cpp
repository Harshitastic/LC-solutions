class Solution {
public:
    int func(int num){
        int maxx=INT_MIN;
        int mini=INT_MAX;
        while(num>0){
            int m=num%10;
            maxx=max(m,maxx);
            mini=min(m,mini);
            num/=10;
            
        }
        return maxx-mini;
    }
    int maxDigitRange(vector<int>& nums) {
        int n=nums.size();
        vector<int> dr(n);
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            dr[i]=func(nums[i]);
            maxi = max(maxi, dr[i]);
        }
        int ans=0;
        for(int i=0; i<n; i++){
            if(dr[i]==maxi)
                ans+=nums[i];
        }

        return ans;
        
        
        
    }
};
class Solution {
public:
    const int MOD=1e9+7;
    int minimumCost(vector<int>& nums, int k) {
        long long cnt=0;
        long long a=k;
        for(int i=0;i<nums.size();i++){
            if(a<nums[i]){
                long long n=nums[i]-a;
                long long m=(n+k-1)/k;
                cnt+=m;
                a+=m*(long long)k;
            }
            a-=nums[i];
        }
        long long ans=(cnt%MOD)*((cnt+1)%MOD)%MOD;
        long long l=(MOD+1)/2;
        ans=ans*l%MOD;
        return (int)ans;
    }
};
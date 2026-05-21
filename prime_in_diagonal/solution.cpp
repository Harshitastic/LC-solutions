class Solution {
public:
    bool isPrime(int n)
    {
        for(int i = 2; i <= sqrt(n); ++i)
            if(n%i == 0)
                return false;
        return true;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        int n=nums.size();
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
            if(isPrime(nums[i][i]))
                ans=max(ans,nums[i][i]);
            if(isPrime(nums[i][n-i-1]))
                ans=max(ans,nums[i][n-i-1]);

        }

        if(ans == INT_MIN ||ans == 1)
            return 0;
        return ans;

    }
};
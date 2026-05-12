class Solution {
public:

    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<pair<int,int>> arr(n);
        int maxx=nums[0];
        arr[0].first=nums[0];
        for(int i=1;i<n;i++){
            maxx=max(nums[i],maxx);
            arr[i].first=maxx;
   
        }
        int mini=nums[n-1];
        arr[n-1].second=nums[n-1];
        for(int i=n-2;i>=0;i--){
            mini=min(nums[i],mini);
            arr[i].second=mini;
   
        }
        int ans=-1;
        for(int i=0;i<n;i++){
            if(arr[i].first-arr[i].second<=k){
                ans=i;
                break;
            }
        }
        return ans;

        
    }
};
class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        int n=nums.size();
        int maxx1=nums[0];
        int maxx2;
        if(n>1) maxx2=nums[n-1];
        vector<bool> a(n,false);
        for(int i=1;i<n-1;i++){
            if(nums[i]>maxx1){
                a[i]=true;
            }
            maxx1=max(maxx1,nums[i]);

        }

        for(int i=n-2;i>0;i--){
            if(nums[i]>maxx2){
                a[i]=true;
            }
            maxx2=max(maxx2,nums[i]);


        }
        vector<int> ans;
        ans.push_back(nums[0]);
        for(int i=1;i<n-1;i++){
            if(a[i]) ans.push_back(nums[i]);

        }
        if(n>1) ans.push_back(nums[n-1]);
        return ans;
        
    }
};
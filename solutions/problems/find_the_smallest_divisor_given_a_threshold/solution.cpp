class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
       int n=nums.size();
       int low=1;
       int high=*max_element(nums.begin(),nums.end());
       int ans=1;
       while(low<=high){
        int mid=(low+high)/2;
        int total=0;
        for(int i=0;i<n;i++){
            total+=ceil((nums[i]*1.0)/mid);

        }
        if(total<=threshold){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
       } 
       return ans;
    }

};
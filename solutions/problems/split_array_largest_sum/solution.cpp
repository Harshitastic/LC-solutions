class Solution {
public:
    int count(vector<int> &a,int sum){
        int parts=1;
        long long total=0;
        for(int num:a){
            if(total+num<=sum){
                total+=num;
        }
            else{
                parts++;
                total=num;
            }
        }
        return parts;
    }
    int splitArray(vector<int>& nums, int k) {
        int low=*max_element(nums.begin(),nums.end());
        long long high=accumulate(nums.begin(),nums.end(),0LL);

        while(low<=high){
            int mid=(low+high)/2;
            int parts=count(nums,mid);
            if(parts<=k){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
};
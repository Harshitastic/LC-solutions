class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int total=0;
        for(int i=0;i<nums.size();i++) total+=nums[i];
        int sum=0;
        int cnt=0;
        for(int i=0;i<nums.size()-1;i++){
            sum+=nums[i];
            if((abs(sum-(total-sum)))%2==0) cnt++;


        }
        return cnt;
        
    }
};
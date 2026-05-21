class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(sum(nums[i])==i){
                return i;
            }
        }
        return -1;

        
    }
    int sum(int n){
        int summ=0;
        while(n>0){
            int m=n%10;
            summ+=m;
            n=n/10;


        }
        return summ;
    }
};
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sz=nums.size();
        map<int,int> mpp;

        for(auto x:nums){
            mpp[x]++;
        }
        for(int i = 0; i <= sz; i++){
            if(mpp[i] == 0)
                return i;
        }
        return -1;


        
    }
};
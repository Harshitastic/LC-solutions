class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        int n=nums.size();
        
        vector<int> ans;
        if(n==0) return ans;
        int cnt=1;
        int val=nums[0];
        ans.push_back(val);
        int i=1;
        while(i<n){
            if(nums[i]==val){
                cnt++;
                if(cnt<=k){
                    ans.push_back(val);
                    i++;

                }
                else{
                    while(i<n && nums[i]==val){
                        i++;
                    }

                }
            }
            else{
                cnt=1;
                val=nums[i];
                ans.push_back(val);
                i++;
            }
        }

        return ans;    
        
    }
};
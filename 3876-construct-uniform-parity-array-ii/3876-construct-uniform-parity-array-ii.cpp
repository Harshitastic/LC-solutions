class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mini=1e9+1;
        for(auto it:nums1){
            if(it&1) mini=min(it,mini);
        }
        if(mini==1e9+1) return true;
        for(auto it:nums1){
            if(it%2==0){
                if(it-mini<1) return false;
            }
        }
        return true;
    }
};
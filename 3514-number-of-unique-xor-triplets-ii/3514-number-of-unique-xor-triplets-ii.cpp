class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        unordered_set<int>st;
        int n=nums.size();

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                st.insert(nums[i]^nums[j]);

            }
        }
        unordered_set<int>stt;
        for(auto it:st){
            for(int j=0;j<n;j++){
                stt.insert(it^nums[j]);

            }
        }
        return stt.size();
    }
};
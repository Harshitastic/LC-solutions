class Solution {
public:
    static bool comp(const pair<int,int>&a,const pair<int,int>&b){
        if(a.second==b.second) return a.first>b.first;
        return a.second>b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        for(auto it:nums){
            mpp[it]++;
        }
        vector<pair<int,int>> v(mpp.begin(), mpp.end());
        sort(v.begin(),v.end(),comp);
        vector<int>ans;
        int cnt=0;
        for(auto it :v){
            ans.push_back(it.first);
            cnt++;
            if(cnt>=k) break;

        }
        return ans;

    }
};

class Solution {
public:
    long long maximizeSum(vector<int>& nums, int k) {
        int n=nums.size();
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++){
            string num=to_string(nums[i]);
            sort(num.begin(),num.end(),greater<char>());
            v.push_back({stoi(num)-nums[i],i});
        }
        sort(v.rbegin(),v.rend());
        int cnt=0;
        for(int i=0;i<n;i++){
            if(cnt==k) break;
            if(v[i].first>0){
                nums[v[i].second]+=v[i].first;
                cnt++;
            }
        }
        long long ans=accumulate(nums.begin(),nums.end(),0LL);
        return ans;
    }
};

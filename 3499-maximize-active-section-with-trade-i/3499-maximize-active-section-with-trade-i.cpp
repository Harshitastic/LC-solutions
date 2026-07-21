class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int n=s.length();
        int ones=0;
        for(int i=0;i<n;i++){
             if(s[i]=='1') ones++;
        }
        string s1="1"+s+"1";
        int m=s1.size();
        vector<pair<char,int>>v;
        for(int i=0;i<m;){
            int j=i;
            while(j<m && s1[j]==s1[i]) j++;
            v.push_back({s1[i],j-i});
            i=j;
        }
        int ans=ones;
        for(int i=1;i+1<(int)v.size();i++){
            if(v[i].first=='1' && v[i-1].first=='0' && v[i+1].first=='0'){
                int zero=v[i-1].second+v[i+1].second;
                ans=max(ans,ones+zero);
            }
        }
        return ans;

    }
};
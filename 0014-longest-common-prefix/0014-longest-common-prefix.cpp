class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int n=strs.size();
        int m=strs[0].length();
        int p=strs[n-1].length();
        int cnt=0;
        for(int i=0;i<min(m,p);i++){
            if(strs[0][i]==strs[n-1][i]) cnt++;
            else break;

        }
        string ans="";
        if(cnt>0) ans=strs[0].substr(0,cnt);
        return ans;

        
    }
};
class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.length();
        int m=t.length();
        vector<int>f(256,0);
        int l=0,r=0,mini=INT_MAX,start=-1,cnt=0;
        for(int i=0;i<m;i++){
            f[t[i]]++;
        }
        while(r<n){
            if(f[s[r]]>0){
                cnt++;
                
            }
            f[s[r]]--;
            while(cnt==m){
                if((r-l+1)<mini){
                    mini=r-l+1;
                    start=l;
                }
                f[s[l]]++;;
                if(f[s[l]]>0) cnt--;
                l++;
            }
            r++;
            
        }
        return start==-1?"":s.substr(start,mini);
    }
};
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int l=0,r=0;
        map<char,int>f;
        int ans=0;
        while(l<n && r<n){
            f[s[r]]++;
            if(f[s[r]]==1){
                ans=max(ans,r-l+1);
                r++;
            }
            else{
                while(f[s[r]]>1){
                    
                    f[s[l]]--;
                    l++;
                }
                r++;
            }
            

        }
        return ans;
    }
};
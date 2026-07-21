class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.length();
        int ans=0;
        int mx=0;
        vector<int>freq(26,0);
        int l=0,r=0;
        while(r<n){
            freq[s[r]-'A']++;
            mx=max(mx,freq[s[r]-'A']);
            while((r-l+1)-mx>k){
                freq[s[l]-'A']--;
                l++;
            }
            ans=max(ans,r-l+1);
            r++;

        }
        return ans;
    }
};
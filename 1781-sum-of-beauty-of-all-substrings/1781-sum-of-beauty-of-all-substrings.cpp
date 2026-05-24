class Solution {
public:
    int beautySum(string s) {
        int ans=0;
        for(int i=0;i<s.length();i++){
            vector<int> freq(26,0);
            for(int j=i;j<s.length();j++){
                freq[s[j]-'a']++;
                int maxx=INT_MIN;
                int mini=INT_MAX;
                for(int k=0;k<26;k++){
                    if(freq[k]>0){
                        mini=min(mini,freq[k]);
                        maxx=max(maxx,freq[k]);
                    }
                }
                ans+=maxx-mini;
            }
        }
        return ans;
    }
};
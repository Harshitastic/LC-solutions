class Solution {
public:
    int mirrorFrequency(string s) {
        vector<int> freq1(10),freq2(26);
        for(int i=0;i<s.length();i++){
            if(s[i]<='9' && s[i]>='0'){
                freq1[s[i]-'0']++;
            }
            else{
                freq2[s[i]-'a']++;
            }
        }
        int ans=0;
        for(int i=0;i<5;i++){
            ans+=abs(freq1[i]-freq1[9-i]);
        }
        for(int i=0;i<13;i++){
            ans+=abs(freq2[i]-freq2[25-i]);
        }
        return ans;
    }
};
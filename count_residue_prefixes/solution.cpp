class Solution {
public:
    int residuePrefixes(string s) {
        int ans=0;
        map<char,int> freq;
        for(int i=0;i<s.length();i++){
            freq[s[i]]++;
            if(freq.size()==(i+1)%3) ans++;

        }
        return ans;
        
    }
};
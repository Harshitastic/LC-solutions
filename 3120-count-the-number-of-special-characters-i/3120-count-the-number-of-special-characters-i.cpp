class Solution {
public:
    int numberOfSpecialChars(string word) {
        int ans=0;
        vector<int> freq(52,0);
        for(int i=0;i<word.length();i++){
            if(word[i]>='a' && word[i]<='z') freq[word[i]-'a']++;
            else freq[word[i]-'A'+26]++;
        }
        for(int i=0;i<26;i++){
            if(freq[i] && freq[i+26]) ans++;
        }
        return ans;
    }
};
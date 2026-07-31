class Solution {
public:
    int minimumPushes(string word) {
        int n=word.length();
        vector<int>freq(26,0);
        for(char c:word){
            freq[c-'a']++;
        }
        int ans=0;
        sort(freq.rbegin(),freq.rend());
        int cost=0;
        for(int i=0;i<26;i++){
            if(!freq[i]) break;
            cost=(i/8)+1;
            ans+=cost*freq[i];
            
        }
        return ans;

    }
};
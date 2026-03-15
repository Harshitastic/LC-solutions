class Solution {
public:
    bool isVowel(char c){
    return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
           
    }

    int vowelStrings(vector<string>& words, int left, int right) {
        int cnt=0;
        for(int i=left;i<=right;i++){
            string s=words[i];
            if(isVowel(s[0]) && isVowel(s[s.size()-1])) cnt++;
        }

        return cnt;
        
    }
};
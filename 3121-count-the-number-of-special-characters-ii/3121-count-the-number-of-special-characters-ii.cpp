class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n=word.length();
        vector<pair<int,int>> present(26,{-1,-1});
        for(int i=0;i<n;i++){
            if(islower(word[i])) present[word[i]-'a'].first=i;
            if(isupper(word[i])) {
                if(present[word[i]-'A'].second==-1){
                    present[word[i]-'A'].second=i;
                }
            }
            
        }
        int cnt=0;
        for(auto it:present){
            if(it.first!=-1 && it.second!=-1 && it.first<it.second) cnt++;
        }
        return cnt;
    }
};
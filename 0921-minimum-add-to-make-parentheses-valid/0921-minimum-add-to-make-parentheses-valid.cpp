class Solution {
public:
    int minAddToMakeValid(string s) {
        int n=s.length();
        int cnt=0,ans=0;
        for(int i=0;i<n;i++){
            if(s[i]=='(') cnt++;
            else{
                cnt--;
                if(cnt<0){
                    ans++;
                    cnt=0;
                }
            }
        }
        return ans+cnt;
    }
};
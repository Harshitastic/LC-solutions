class Solution {
public:
    int scoreOfParentheses(string s) {
        int n=s.length();
        int i=0;
        int cnt=0;
        int ans=0;
        while(i<n){
            if(s[i]=='(') cnt++;
            else{
                cnt--;
                if(i>0 && s[i-1]=='('){
                    ans+=(1<<cnt);
                }
            }
            i++;
 
            
        }
        return ans;

    }
};
class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
        int cnt1=0;

        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                if(cnt1>0) ans+=s[i];
                cnt1++;

            }
            else if(s[i]==')'){
                cnt1--;
                if(cnt1>0) ans+=s[i];
            }

        }return ans;
    }
};
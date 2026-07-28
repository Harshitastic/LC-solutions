class Solution {
public:
    string smallestPalindrome(string s) {
        int n=s.length();
        set<char>st;
        string ans="";
        string left="";
        if(n&1){
            for(int i=0;i<n/2;i++){
                left+=s[i];
            }

            sort(left.begin(),left.end());
            ans=left;
            ans+=s[n/2];
            for(int i=left.size()-1;i>=0;i--){
                ans+=left[i];
            }
        }else{
            for(int i=0;i<(n/2);i++){
                left+=s[i];

            }
            sort(left.begin(),left.end());
            ans=left;
            
            for(int i=left.size()-1;i>=0;i--){
                ans+=left[i];
            }
        }
        return ans;
    }
};
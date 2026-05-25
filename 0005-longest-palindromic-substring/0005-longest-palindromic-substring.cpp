class Solution {
public:
    bool palindrome(string &s,int i,int j){
        while(i<j){
            if(s[i]!=s[j]) return false;
            i++;
            j--;
        }
        return true;

    }
    string longestPalindrome(string s) {
        int n=s.length();
        int start=0;
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(palindrome(s,i,j)){
                    if(j-i+1>ans){
                        ans=j-i+1;
                        start=i;
                    }
                }
            }
        }        
        return s.substr(start,ans);
    }
};
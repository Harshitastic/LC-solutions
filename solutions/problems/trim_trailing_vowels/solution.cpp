class Solution {
public:
    string trimTrailingVowels(string s) {
        int n=s.length();
        int len=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u' ){
                len++;
            }
            else{
                break;
            }
        }
        s.erase(n-len,len);
        return s;
        
    }
};
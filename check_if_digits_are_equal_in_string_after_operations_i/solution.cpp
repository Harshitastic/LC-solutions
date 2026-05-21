class Solution {
public:
    bool hasSameDigits(string s) {
        
        while(s.length()>2){
            string t="";
            for(int i=0;i<s.length()-1;i++){
                int m=(s[i]-'0' +s[i+1]-'0')%10;
                t+=(m+'0');

            }
            s=t;


        }
        return s[1]==s[0];
        
    }
};
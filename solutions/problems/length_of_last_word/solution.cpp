class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        int i=0;
        for( i=s.size()-1;i>=0;i--){
            if(s[i]!=' '){
                break;
            }
        }
        int j=i;
        while(j>=0 && s[j]!=' ') j--;
        int len =i-j;
        return len;
        

                
                
                
            

        
        
    }
};
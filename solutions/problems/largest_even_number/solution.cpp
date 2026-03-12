class Solution {
public:
    string largestEven(string s) {
        int n = s.length();
        
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='2'){
                return s.substr(0,i+1);
                

            }
        }
        return "";
            
        
    
    }
};
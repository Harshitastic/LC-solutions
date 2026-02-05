class Solution {
public:
    string largestEven(string s) {
        int idx=-1;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='2'){
                idx=i;
                break;
            }
        }
        if(idx>=0){
            string t=s.substr(0,idx+1);
            return t;
        }
        else{
            return "";
        }
        
    }
};
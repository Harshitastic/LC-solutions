class Solution {
public:
    int passwordStrength(string password) {
        int n=password.length();
        int ans=0;
        set<char> st;
        for(char c: password) st.insert(c);
        for(auto it:st){
            if(it>='a' && it<='z') ans+=1;
            if(it>='A' && it<='Z') ans+=2;
            if(it>='0' && it<='9') ans+=3;
            else if(it=='!'||it=='@'||it=='#'||it=='$') ans+=5;
            

        }
        return ans;
        
    }
};
class Solution {
public:
    int minInsertions(string s) {
        int n=s.length();
        int c=0;
        int ans=0;
        for(int i=0;i<n;i++){
            if(s[i]=='(') {
                if(c%2){
                    ans++;
                    c--;
                }
                c+=2;
            }
            else{
                c--;
                if(c<0){
                    c=1;
                    ans++;
                }
                
            }


        }
        ans+=c;
        return ans;
    }
};
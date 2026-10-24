class Solution {
public:
    int countMagicalPairs(string s) {
        int n=s.size(),ans=0;
        for(int j=0;j<n;j++){
            vector<int>f(27,0);
            set<int>st;
            for(int i=j;i>=0;i--){
                st.insert(s[i]);
                f[st.size()]++;
            }
            st.clear();
             for(int i=j+1;i<n;i++){
                st.insert(s[i]);
                ans+=f[st.size()];
            }

        }
        return ans;
    }
};
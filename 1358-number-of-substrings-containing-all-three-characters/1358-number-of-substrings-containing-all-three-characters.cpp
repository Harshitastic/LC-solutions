class Solution {
public:
    int numberOfSubstrings(string s) {
        int i=0,j=0,ans=0;
        int n=s.length();
        map<char,int>mpp;
        while(j<n){
            mpp[s[j]]++;
            while(mpp.size()==3){
                ans+=(n-j);
                mpp[s[i]]--;
                if(mpp[s[i]]==0) mpp.erase(s[i]);
                i++;
            }
            j++;
        }
        return ans;
    }
};
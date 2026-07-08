class Solution {
public:
    bool canMakeSubsequence(string s, string t) {
       int n=s.size(),m=t.size();
        if(n>m) return false;
        vector<int>p(n+1,INT_MAX),su(n+1,INT_MAX);
        p[0]=0;
        int j=0;
        for(int i=0;i<n;i++){
            while(j<m && t[j]!=s[i]) j++;
            if(j==m ) break;
            p[i+1]=j+1;
            j++;
        }
        su[n]=0;
        j=m-1;
        for(int i=n-1;i>=0;i--){
            while(j>=0 && t[j]!=s[i]) j--;
            if(j<0) break;
            su[i]=m-j;
            j--;
        }
        if(p[n]!=INT_MAX) return true;
        for(int i=0;i<n;i++){
            if(p[i]!=INT_MAX && su[i+1]!=INT_MAX && p[i]+su[i+1]+1<=m) return true;
        }
        return false;
    }
};
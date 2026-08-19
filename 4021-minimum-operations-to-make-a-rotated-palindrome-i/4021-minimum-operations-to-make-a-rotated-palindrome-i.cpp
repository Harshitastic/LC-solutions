class Solution {
public:
    int minOperations(string s) {
        int n=s.length();
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            string t=s.substr(i,n-i)+s.substr(0,i);
            int total=i;
            int m=t.size();
            for(int j=0;j<=(m-1)/2;j++){
                total+=min(abs(t[j]-t[m-1-j]),26-abs(t[j]-t[m-1-j]));

            }
            ans=min(total,ans);
        }
        return ans;
    }
};
class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
        int n=s.length();
        int cnt0=0,cnt1=0,ans=0,curr=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                cnt0++;
                

            }
            else{
                cnt1++;
                if((i<n-1 && s[i+1]=='0') || (i==n-1)){
                    curr=2*(min(cnt0,cnt1));
                    ans=max(ans,curr);

                    cnt0=0;
                    cnt1=0;

                }
                

            }
        }
        return ans;
        
    }
};
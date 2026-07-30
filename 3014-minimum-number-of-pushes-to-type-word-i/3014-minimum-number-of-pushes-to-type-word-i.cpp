class Solution {
public:
    int minimumPushes(string word) {
        int n=word.length();
        int block=n/8;
        int rem=n%8;
        int ans=0;
        int i;
        for(i=1;i<=block;i++){
            ans+=(1<<3)*i;

        }
        ans+=(rem*(i));
        return ans;

    }
};
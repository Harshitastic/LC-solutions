class Solution {
public:
    void func(string curr,int open,int close,int n,vector<string> &ans){
        if(curr.length()==2*n){
            ans.push_back(curr);
            return;
        }
        if(open<n) func(curr+'(',open+1,close,n,ans);
        if(close<open) func(curr+')',open,close+1,n,ans);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        func("",0,0,n,ans);
        return ans;

    }
};
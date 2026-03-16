class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        int cnt=0;
        vector<int> ans(2);
        ans[1]=INT_MIN;
        ans[0]=-1;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==1) cnt++;
                if(cnt>ans[1]){
                    ans[1]=cnt;
                    ans[0]=i;
                }

            }
            cnt=0;
        }
        return ans;
        
    }
};
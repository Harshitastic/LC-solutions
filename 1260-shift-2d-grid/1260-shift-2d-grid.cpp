class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m=grid.size();
        int n=grid[0].size();
        
        k=k%(m*n);
        if(!k) return grid;
        vector<int> temp;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                temp.push_back(grid[i][j]);

            }
        }
        int sz=temp.size();
        reverse(temp.begin(),temp.end());
        reverse(temp.begin(),temp.begin()+k);
        reverse(temp.begin()+k,temp.end());
        vector<vector<int>>ans(m,vector<int>(n,0));
        int idx=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ans[i][j]=temp[idx];
                idx++;

            }
        }
        return ans;
    }
};
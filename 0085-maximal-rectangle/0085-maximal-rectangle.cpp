class Solution {
public:
    int maximumarea(vector<int> heights){
         int n=heights.size();
        stack<int>st;
        vector<int> lsmall(n),rsmall(n);
        for(int i=0;i<n;i++){
            while(!st.empty() && heights[i]<=heights[st.top()]) st.pop();
            if(st.empty()) lsmall[i]=0;
            else lsmall[i]=st.top()+1;
            st.push(i);
        }
        while(!st.empty()) st.pop();
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && heights[i]<=heights[st.top()]) st.pop();
            if(st.empty()) rsmall[i]=n-1;
            else rsmall[i]=st.top()-1;
            st.push(i);
        }

        int maxx=0;
        for(int i=0;i<n;i++){
            int w=rsmall[i]-lsmall[i]+1;
            maxx=max(maxx,heights[i]*w);
        }

        return maxx;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int> row(m,0);
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]=='1') row[j]++;
                else row[j]=0;
            }
            ans=max(ans,maximumarea(row));
        }
        return ans;
    }
};
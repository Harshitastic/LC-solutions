class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> pmaxx(n);
        vector<int> smaxx(n);
        pmaxx[0]=height[0];
        smaxx[n-1]=height[n-1];
        for(int i=1;i<n;i++){
            pmaxx[i]=max(pmaxx[i-1],height[i]);
        }
        for(int i=n-2;i>=0;i--){
            smaxx[i]=max(smaxx[i+1],height[i]);
        }
        int ans=0;
        for(int i=0;i<n;i++){
            if(pmaxx[i]>height[i] && smaxx[i]>height[i]){
                ans+=min(pmaxx[i],smaxx[i])-height[i];
            }
        }
        return ans;
    }
};
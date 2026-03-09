class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int n=capacity.size();
        int ans=-1;
        int min_cap=INT_MAX;
        for(int i=0;i<n;i++){
            capacity[i]=capacity[i]-itemSize;
            

            if(capacity[i]>=0){
                if(capacity[i] < min_cap){
                    ans=i;
                    min_cap=capacity[i];
                }


            }
        }  
        return ans;      
        
        
        
    }
};
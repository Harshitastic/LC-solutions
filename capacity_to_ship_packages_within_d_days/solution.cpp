class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);
        int n=weights.size();
        int ans=high;
        while(low<=high){
            int mid=(low+high)/2;

            
            int est_days=1;
            int w=0;
            for(int i=0;i<n;i++){
                
                if(w+weights[i]<=mid){
                    
                    w+=weights[i];
                }
                else{
                    est_days++;
                    w=weights[i];

                }

            }
            if(est_days<=days){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};
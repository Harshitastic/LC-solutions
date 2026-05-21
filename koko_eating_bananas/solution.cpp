class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int maxx=*max_element(piles.begin(),piles.end());
        int low=1,high=maxx;
        int ans=maxx;
        while(low<=high){
            long long mid=(low+high)/2;
            long long hours=0;
            for(int bananas :piles){
                hours+=ceil((bananas*1.0)/mid);
            }
            if(hours<=h){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};
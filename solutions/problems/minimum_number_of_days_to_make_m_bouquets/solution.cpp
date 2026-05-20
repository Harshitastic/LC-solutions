class Solution {
public:
    bool possible(vector<int>& arr,int d,int m,int k){
        int n=arr.size();
        int cnt=0;
        int b=0;
        for(int i=0;i<n;i++){
            if(arr[i]<=d){
                cnt++;
                if(cnt==k){
                    b++;
                    cnt=0;
                }
            }
            else{
                cnt=0;
            }
        }
        if(b>=m) return true;
        else return false;

    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long total=1LL*k*m;
        if(total>bloomDay.size()) return -1;
        int mini=*min_element(bloomDay.begin(),bloomDay.end());
        int maxx=*max_element(bloomDay.begin(),bloomDay.end());
        int low=mini,high=maxx;
        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;

            if(possible(bloomDay,mid,m,k)){
                ans=mid;
                high=mid-1;
                
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};
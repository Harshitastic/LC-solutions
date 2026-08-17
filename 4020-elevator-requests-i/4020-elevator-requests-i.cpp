class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int cur=0;
        int ans=0;
        for(int i=0;i<requests.size();i++){
            if(requests[i]!=cur){
                ans+=abs(requests[i]-cur);
                cur=requests[i];
            }
        }
        return ans;
    }
};
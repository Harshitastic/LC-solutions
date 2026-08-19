class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int m=drones.size();
        int n=drones[0].size();
        int ans=-1;
        int distt=INT_MAX;
        for(int i=0;i<m;i++){
            int dist=abs(drones[i][0]-target[0])+abs(drones[i][1]-target[1]);
            if(dist<=drones[i][2]){
                if(dist<distt){
                    ans=i;
                    distt=dist;

                }
                
            }

            
        }
        return ans;
    }
};
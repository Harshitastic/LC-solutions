class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        
        int n=nums.size();
        vector<int> player(3,0);
        int curr=1;
        for(int i=0;i<n;i++){
            if(nums[i]%2!=0){
                if(curr==1) curr=2;
                else curr=1;
                
            }
            if( (i+1)%6==0){
                if(curr==1) curr=2;
                else curr=1;
                

            }
            player[curr]+=nums[i];


        }
        return (player[1]-player[2]);

        
    }
};
class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n=hand.size();
        map<int,int>mpp;
        for(auto it:hand) mpp[it]++;
        sort(hand.begin(),hand.end());
        for(int i=0;i<n;i++){
            int val=hand[i];
            if(mpp[val]==0) continue;
            mpp[val]--;
            for(int j=0;j<groupSize-1;j++){
                val++;
                if(mpp[val]<=0) return false;
                
                mpp[val]--;
            }
        }
        return true;
    }
};
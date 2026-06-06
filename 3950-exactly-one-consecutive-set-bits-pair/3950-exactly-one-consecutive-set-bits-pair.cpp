class Solution {
public:
    bool consecutiveSetBits(int n) {
        vector<int> bits;
        for(int i=0;i<32;i++){
            int temp=1<<i;
            bits.push_back(bool(temp&n));
        }
        int cnt=0;
        for(int i=0;i<31;i++){
            if(bits[i]==1 && bits[i]==bits[i+1]) cnt++;
        }
        return cnt==1?true:false;
    }
};
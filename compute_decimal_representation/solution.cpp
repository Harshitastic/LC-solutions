class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        int i=0;
        vector<int> ans;
        while(n>0){
            int m=n%10;
            if(m!=0){
                ans.push_back(m*(pow(10,i)));
                


            }
            i++;
            n/=10;

        }
        sort(ans.rbegin(),ans.rend());
        return ans;
        
    }
};
class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;
        string s="123456789";
        int n=s.size();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                int val=stoi(s.substr(i,j-i+1));
                if(val>=low && val<=high) ans.push_back(val);
            }

        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_map<int,int> mpp;
        vector<int> ans;
        int common=0;
        for(int i=0;i<A.size();i++){
            if(A[i]==B[i]){
                mpp[A[i]]+=2;
                common++;
            }else{
                mpp[A[i]]++;
                mpp[B[i]]++;
                if(mpp[A[i]]==2) common++;
                if(mpp[B[i]]==2) common++;
            }
            
            ans.push_back(common);
            
        }
        return ans;
    }
};
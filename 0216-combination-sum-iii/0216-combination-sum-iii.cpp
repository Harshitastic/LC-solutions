class Solution {
public:
void func(int ind,int target,int k,vector<int> &arr,vector<vector<int>> &ans,vector<int> &ds){
        if(target==0 && ds.size()==k){
            ans.push_back(ds);
            return;
            }

        if(ds.size()>=k) return;
        for(int i=ind;i<arr.size();i++){
            
            if(arr[i]>target) break;
            ds.push_back(arr[i]);
            func(i+1,target-arr[i],k,arr,ans,ds);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> candidates={1,2,3,4,5,6,7,8,9};
        vector<vector<int>> ans;
        vector<int> ds;
        func(0,n,k,candidates,ans,ds);
        return ans;
    }
};
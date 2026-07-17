class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n=nums.size();
        vector<int> nse(n);
        stack<int>st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && nums[st.top()]>=nums[i]) st.pop();
            if(st.empty()) nse[i]=n;
            else nse[i]=st.top();
            st.push(i);
        }
        while(!st.empty()) st.pop();
        vector<int>pse(n);
        for(int i=0;i<n;i++){
            while(!st.empty() && nums[st.top()]>nums[i]) st.pop();
            if(st.empty()) pse[i]=-1;
            else pse[i]=st.top();
            st.push(i);

        }
        long long ans1=0;
        for(int i=0;i<n;i++){
            int left=i-pse[i];
            int right=nse[i]-i;
            long long a=left*right*1LL;
            long long val=(a*nums[i]*1LL);
            ans1=(ans1+val);
        }


        while(!st.empty()) st.pop();
        vector<int>nge(n);
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && nums[st.top()]<=nums[i]) st.pop();
            if(st.empty()) nge[i]=n;
            else nge[i]=st.top();
            st.push(i);
        }
        while(!st.empty()) st.pop();
        vector<int>pge(n);
        for(int i=0;i<n;i++){
            while(!st.empty() && nums[st.top()]<nums[i]) st.pop();
            if(st.empty()) pge[i]=-1;
            else pge[i]=st.top();
            st.push(i);

        }
        long long ans2=0;
        for(int i=0;i<n;i++){
            int left=i-pge[i];
            int right=nge[i]-i;
            long long a=left*right*1LL;
            long long  val=(a*nums[i]*1LL);
            ans2=(ans2+val);
        }
        return ans2-ans1;


    }
};
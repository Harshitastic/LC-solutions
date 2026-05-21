class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        set<int> st;
        for(int i=0;i<arr1.size();i++){
            int x=arr1[i];
            while(x>0){
                st.insert(x);
                x/=10;
            }
        }
        int ans=0;
        
        for(int i=0;i<arr2.size();i++){
            int x=arr2[i];
            int y=x;
            int len=0;
            while(y>0){
                len++;
                y/=10;
            }
            
            while(x>0){
                if(st.find(x)!=st.end()){
                    ans=max(ans,len);
                    break;
                }
                x/=10;
                len--;
            }

        }
        return ans;
            
        
    }
};
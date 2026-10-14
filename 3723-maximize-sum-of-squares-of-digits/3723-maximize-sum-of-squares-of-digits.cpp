class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
         string ans="";
         int l=0;
         int i=9;
         
         while(l<num){
            if(sum>=i){
                sum-=i;
                 ans+='0'+i;
                 l++;

            }
            else{
                while(sum<i) i--;
                sum-=i;
                ans+='0'+i;
                l++;

            }
           
            

         }
         if(sum!=0 ) return "";
         return ans;
    }
};
class Solution {
public:
    string addStrings(string num1, string num2) {
        int n1=num1.length(),n2=num2.length();
        int i=n1-1,j=n2-1;
        string ans="";
        int carry=0;
        while(i>=0 || j>=0){
            int a1=0,a2=0;
            if(i>=0){
                a1=num1[i]-'0';
                i--;
            }
            if(j>=0){
                a2=num2[j]-'0';
                j--;
            }
            int total=a1+a2+carry;
            carry=total/10;
            ans.push_back((total%10)+'0');

        }
        if(carry>0) ans.push_back(carry+'0');
        reverse(ans.begin(),ans.end());
        return ans;

        
    }
};
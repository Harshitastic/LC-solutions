class Solution {
public:
    int helper(const string &s,int i,long long num,int sign){
        int n=s.size();
        if(i>=n || !isdigit(s[i])) return (int)(sign*num);
        num=num*10+(s[i]-'0');

        if(sign*num <=INT_MIN) return INT_MIN;
        else if (sign*num>=INT_MAX) return INT_MAX;
        return helper(s,i+1,num,sign);
    }
    int myAtoi(string s) {
        int i=0;
        int n=s.size();
        while(i<n && s[i]==' ') i++;
        int sign=1;
        if(i<n && s[i]=='+' || s[i]=='-'){
            if(s[i]=='-') sign=-1;
            i++;
        }
        return helper(s,i,0,sign);
    }
};
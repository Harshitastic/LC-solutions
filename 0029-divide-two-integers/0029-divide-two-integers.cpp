class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==divisor ) return 1;
        if(dividend==INT_MIN && divisor==-1) return INT_MAX;
        if(divisor==1) return dividend;
        int sign=(divisor<0 ^ dividend<0)?-1:1;
        long long n=llabs((long long)dividend);
        long long d=llabs((long long)divisor);
        long long ans=0,sum=0;
        while(n>=d){
            int cnt=0;
            while(n>=(d<<(cnt+1))) cnt++;
            ans+=1<<cnt;
            n-=(d<<cnt);
        }
        if(ans>INT_MAX) return INT_MAX*sign;

        return ans*sign;
    }
};
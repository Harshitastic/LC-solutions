class Solution {
public:
    int M = 1e9+7;
    long long  power(long long x,long long n){
        if(n==0) return 1;
        if(n==1) return x%M;
        long long t=power(x,n/2);
        t=(t*t)%M;

        if(n%2) t=(t*x)%M;

        return t;
    }
    long long myPow(long long  x, long long n) {
        
        return power(x,n);
    }
    int countGoodNumbers(long long n) {
        long long ans=0;
        ans=myPow(20,n/2)% M;
        if(n%2!=0) ans=(ans*5)%M;
        return ans%M;
       
    }
};
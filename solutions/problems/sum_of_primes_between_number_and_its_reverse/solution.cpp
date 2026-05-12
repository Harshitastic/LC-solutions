class Solution {
public:
    bool prime(int x){
        if(x<=1) return false;
        if(x==2) return true;
        if(x%2==0) return false;
        for(int i=3;i*i<=x;i+=2){
            if(x%i==0) return false;
        }
        return true;
    }
    int sumOfPrimesInRange(int n) {
        int r=0;
        int a=n;
        while(a>0){
            int m=a%10;
            r=r*10;
            r+=m;
            a/=10;
        }
        int l=min(n,r);
        int h=max(n,r);
        int ans=0;
        for(int i=l;i<=h;i++){
            if(prime(i)) ans+=i;
        }
        return ans;


        
    }
};
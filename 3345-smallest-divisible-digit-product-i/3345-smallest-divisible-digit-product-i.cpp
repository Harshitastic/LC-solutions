class Solution {
public:
    int func(int n){
        int pro=1;
        while(n>0){
            pro*=n%10;
            n/=10;

        }
        return pro;
    }
    int smallestNumber(int n, int t) {
        for(int i=0;i<=9;i++){
            if(func(n+i)%t==0){
                return n+i;
            }
        }
        return -1;
        
    }
};
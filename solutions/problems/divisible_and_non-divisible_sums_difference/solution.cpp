class Solution {
public:
    int differenceOfSums(int n, int m) {
        long long num1=summ1(n,m);
        long long num2=summ2(n,m);
        return num1-num2;
        
    }
    long long summ1(int n,int m){
        long long sum=0;
        for(int i=1;i<=n;i++){
            if(i%m!=0){
                sum+=i;

            }
        }
        return sum;
    }

    long long summ2(int n,int m){
        long long sum=0;
        for(int i=1;i<=n;i++){
            if(i%m==0){
                sum+=i;

            }
        }
        return sum;
    }
};
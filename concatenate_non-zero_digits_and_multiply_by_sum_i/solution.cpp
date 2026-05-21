class Solution {
public:
    long long sumAndMultiply(int n) {
        int i=1;
        int new1=0;
        while(n>0){
            int m=n%10;
            n=n/10;
            if(m!=0){
                new1+=m*i;
                i*=10;



            }
        }
        long long sum=0;
        int new2=new1;
        while(new2>0){
            int p=new2%10;
            new2=new2/10;
            sum+=p;

        }
        long long ans=sum*new1;
        return ans;
        
    }
};
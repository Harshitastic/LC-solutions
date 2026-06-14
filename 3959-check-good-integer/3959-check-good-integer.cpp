class Solution {
public:
    int digit(int n ){
        int total=0;
        while(n>0){
            int m=n%10;
            total+=m;
            n/=10;

        }
        return total;
    }
    int square(int n){
        int total=0;
        while(n>0){
            int m=n%10;
            total+=m*m;
            n/=10;

        }
        return total;
        
    }
    bool checkGoodInteger(int n) {
        return (square(n)-digit(n)>=50);
    }
};
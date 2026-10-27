class Solution {
public:
    int calculateScore(int a, int b) {
        int m=__builtin_popcount(a);
        int n=__builtin_popcount(b);
        if(m>=n) return m*n;
        return n/m;
    }
};
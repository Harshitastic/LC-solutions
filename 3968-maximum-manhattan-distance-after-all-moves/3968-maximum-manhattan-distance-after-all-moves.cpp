class Solution {
public:
    int maxDistance(string moves) {
        int v=0;
        int h=0;
        int u=0;
        int n=moves.length();
        for(int i=0;i<n;i++){
            if(moves[i]=='U') v++;
            else if(moves[i]=='D' ) v--;
            else if(moves[i]=='L' ) h++;
            else if(moves[i]=='R') h--;
            else u++;

        }
        return abs(v)+abs(h)+u;
    }
};
class Solution {
public:
    bool asteroidsDestroyed(long long mass, vector<int>& asteroids) {
        int n=asteroids.size();
        sort(asteroids.begin(),asteroids.end());
        for(int i=0;i<n;i++){
            if(asteroids[i]<=mass){
                mass+=asteroids[i];
            }
            else return false;
        }
        return true;


    }
};
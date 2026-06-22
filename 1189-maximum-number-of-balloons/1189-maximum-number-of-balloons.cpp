class Solution {
public:
    int maxNumberOfBalloons(string text) {
        
        vector<int> f(5,0);
        for(int i=0;i<text.length();i++){
            if(text[i]=='b') f[0]++;
            if(text[i]=='a') f[1]++;
            if(text[i]=='l') f[2]++;
            if(text[i]=='o') f[3]++;
            if(text[i]=='n') f[4]++;

        }
        f[2]=f[2]/2;
        f[3]=f[3]/2;
        return *min_element(f.begin(),f.end());
    }
};
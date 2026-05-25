class Solution {
public:
    int myAtoi(string s) {
        int n = s.length();
        long long ans = 0;
        int i = 0;
        bool neg = false;

        while(i < n && s[i] == ' ') i++;
        if(i < n && (s[i] == '-' || s[i] == '+')){
            if(s[i] == '-') neg = true;
            i++;
        }
        while(i < n){

            if(s[i] < '0' || s[i] > '9') break;

            ans = ans * 10 + (s[i] - '0');

            if(neg){
                if(-ans < INT_MIN) return INT_MIN;
            }
            else{
                if(ans > INT_MAX) return INT_MAX;
            }

            i++;
        }

        if(neg) return (int)(-ans);
        return (int)ans;
    }
};
class Solution {
public:
        int days[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        vector<int> pre_days=vector<int>(12,0);
        Solution(){
        for(int i=1;i<12;i++){
            pre_days[i]=pre_days[i-1]+days[i-1];
        }
        }
    int helper(string a){

        int m=stoi(a.substr(0,2));
        int d=stoi(a.substr(3,2));
        return pre_days[m-1]+d;

    }
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {

        int a_alice=helper(arriveAlice);
        int l_alice=helper(leaveAlice);
        int a_bob=helper(arriveBob);
        int l_bob=helper(leaveBob);
        cout << a_alice << " " << l_alice << " "
     << a_bob << " " << l_bob << endl;
        int start=max(a_alice,a_bob);
        int end=min(l_alice,l_bob);
        return max(0,end-start+1);
        
    }
};
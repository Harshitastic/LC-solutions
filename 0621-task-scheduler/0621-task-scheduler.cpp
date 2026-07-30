class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        map<char,int>mpp;
        for(auto it:tasks){
            mpp[it]++;
        }
        priority_queue<int>pq;
        for(auto it:mpp){
            pq.push(it.second);
        }
        queue<pair<int,int>>q;
        int time=0;
        while(!q.empty() || !pq.empty()){
            time++;
            if(!q.empty() && q.front().second==time){
                pq.push(q.front().first);
                q.pop();

            }
            if(!pq.empty()){
            int k=pq.top();
            pq.pop();
            k--;
            if(k>0){
                q.push({k,time+n+1});

            }
            }
            
            

            
        }
        return time;

    }
};
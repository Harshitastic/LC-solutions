class MedianFinder {
private:
        priority_queue<int>maxx;
        priority_queue<int,vector<int>,greater<int>>mini;
public:
    MedianFinder() {

    }
    
    void addNum(int num) {
        maxx.push(num);
        mini.push(maxx.top());
        maxx.pop();

        if(mini.size()>maxx.size()){
            maxx.push(mini.top());
            mini.pop();
        }
    }
    
    double findMedian() {
        if(maxx.size()==mini.size()) return (mini.top()+maxx.top())/2.0;
        return maxx.top();
        
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
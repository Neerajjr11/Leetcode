class SmallestInfiniteSet {
public:
    priority_queue <int, vector<int>, greater<int> > pq;
    vector<bool> isPresent;
    SmallestInfiniteSet() {
        isPresent = vector<bool>(1001, true);
        for(int i = 1; i <= 1000; i++){
            pq.push(i);
        }
    }
    
    int popSmallest() {
        int x = pq.top();
        pq.pop();
        isPresent[x] = false;
        return x;
    }
    
    void addBack(int num) {
        if(isPresent[num] == false){
            isPresent[num] = true;
            pq.push(num);
        }
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */
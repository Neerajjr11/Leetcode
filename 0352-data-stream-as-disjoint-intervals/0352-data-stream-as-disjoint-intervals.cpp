class SummaryRanges {
    set<int> values;
public:
    SummaryRanges() {
        
    }
    
    void addNum(int value) {
        values.insert(value);
    }
    
    vector<vector<int>> getIntervals() {
        if(values.empty())
            return {};
        vector<vector<int>> intervals;
        int left  = -1;
        int right = -1;
        for(int i : values){
            if(left < 0)
                left = right = i;
            else if(i == right + 1)
                right = i;
            else{
                intervals.push_back({left, right});
                left = right = i;
            }
        }
        intervals.push_back({left, right});
        return intervals;
    }
};

/**
 * Your SummaryRanges object will be instantiated and called as such:
 * SummaryRanges* obj = new SummaryRanges();
 * obj->addNum(value);
 * vector<vector<int>> param_2 = obj->getIntervals();
 */
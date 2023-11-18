class StockSpanner {
public:
    //store elements greater than current element in the left
    stack<pair<int,int>> st;
    int sz;
     //to track number of element processed
    int ind = 0;
    StockSpanner() {
        
    }
    
    int next(int price) {
        //Remove all the elements smaller than current element
        while(!st.empty() and st.top().first <= price)
            st.pop();
        //all elemnts in the left are smaller or equal to price
        if(st.empty())
            sz = ind + 1;
        //stack top gives index of first greater element
        else
            sz = (ind - st.top().second);
        st.push({price, ind});
        ind++;
        return sz;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
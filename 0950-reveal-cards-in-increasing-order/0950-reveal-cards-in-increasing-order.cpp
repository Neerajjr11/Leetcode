class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        if(deck.size() <= 2)
            return deck;
        sort(deck.begin(), deck.end());
        deque<int> res;
        res.push_front(deck.back());
        deck.pop_back();
        while(!deck.empty()){
            int pusher = res.back();
            res.pop_back();
            res.push_front(pusher);
            res.push_front(deck.back());
            deck.pop_back();
        }
        vector<int> ans(res.begin(), res.end());
        return ans;
    }
};
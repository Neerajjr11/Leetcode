class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> heap(piles.begin(), piles.end());
        int total = accumulate(piles.begin(), piles.end(), 0);
        while(k--){
            int curr = heap.top();
            heap.pop();
            int remove_elem = curr / 2;
            total -= remove_elem;
            heap.push(curr - remove_elem);
        }
        return total;
    }
};
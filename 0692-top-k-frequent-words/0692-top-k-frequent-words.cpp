class Solution {
private:
            //First if they are not same that means occurrence count of first is greater than second and the second one should come first (Min heap) , but if occurrence count is same - we need to check for lexographic order and return the least one first
    struct MyComp{
        bool operator() (const pair<int, string>& a, const pair<int, string>& b) {
            if(a.first != b.first)
                return a.first > b.first;
            else
                return a.second < b.second;
        }
    };
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> map;
        for(int i = 0; i < words.size(); i++){
            map[words[i]]++;
        }
        priority_queue<pair<int, string>, vector<pair<int, string>>, MyComp> pq;
        for(auto it = map.begin(); it != map.end(); it++){
            pq.push(make_pair(it->second, it->first));
            if(pq.size() > k)
                pq.pop();
        }
        vector<string> res;
        while(!pq.empty()){
            res.insert(res.begin(), pq.top().second);
            pq.pop();
        }
        return res;
    }
};
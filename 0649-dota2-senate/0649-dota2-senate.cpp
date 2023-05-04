class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int>radiant, dire;
        for(int i = 0; i < senate.size(); i++)
            if(senate[i] == 'R')
                radiant.push(i);
            else
                dire.push(i);
        int radiant_popped, dire_popped;
        while(!radiant.empty() and !dire.empty()){
            radiant_popped = radiant.front();
            radiant.pop();
            dire_popped = dire.front();
            dire.pop();
            if(radiant_popped < dire_popped)
                radiant.push(radiant_popped + senate.size());
            else
                dire.push(dire_popped + senate.size());
        }
        return radiant.size() > dire.size() ? "Radiant" : "Dire";
    }
};
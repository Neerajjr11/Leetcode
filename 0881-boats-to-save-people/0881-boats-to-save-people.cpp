class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int l  = 0;
        int r = people.size()-1;
        int count = 0;
        while(l<=r){
            if(people[l]+people[r] <=limit){
                l++;
                r--;
                count++;
            }
            else if(people[l]>people[r]){
                l++;
                count++;
            }
            else{
                r--;
                count++;
            }
        }
        return count;
    }
};
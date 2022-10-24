class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int res = 0;
        int count= 0;
        int cap = capacity;
        for(int i = 0; i<size(plants);i++){
            
            if(plants[i]<=capacity)
            {
                capacity -= plants[i];
                count++;
                res++;
            }
            else{
                res += count;
                capacity = cap-plants[i];
                res+=i+1;
                count++;
            }
        }
        return res;
    }
};
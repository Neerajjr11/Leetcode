class Solution {
public:
    int minimumRefill(vector<int>& plants, int capacityA, int capacityB) {
        int i = 0;
        int j = plants.size() - 1;
        int tot_refill = 0;
        int capA = capacityA;
        int capB = capacityB;
        while(i<j){
            
            if(plants[i]<=capacityA)
            {
                capacityA-=plants[i];
                i++;
            }
            else{
                tot_refill++;
                capacityA = capA-plants[i];
                i++;
            }
            if(plants[j]<=capacityB)
            {
                capacityB-=plants[j];
                j--;
            }
            else{
                tot_refill++;
                capacityB = capB-plants[j];
                j--;
            }
        }
        if(i==j){
            if(capacityA<plants[i] && capacityB<plants[i])
                tot_refill++;
        }
        return tot_refill;
    }
};
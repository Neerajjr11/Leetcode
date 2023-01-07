class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
//         if we run out of fuel say at some ith gas station. All the gas station between ith and starting point are bad starting point as well.
//         So, this means we can start trying at next gas station on the i + 1 station
        int total_gas = 0,total_cost = 0, remaining_fuel = 0,start = 0;
        for(int i = 0; i < gas.size(); i++){
            total_gas += gas[i];
            total_cost += cost[i];
            remaining_fuel += gas[i] - cost[i];
            if(remaining_fuel < 0){
                start = i + 1;
                remaining_fuel = 0;
            }
        }
        if(total_gas < total_cost)
            return -1;
        return start;
    }
};
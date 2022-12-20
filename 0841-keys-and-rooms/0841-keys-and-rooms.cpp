class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        // we have a list of room, we are starting from first room and each room has a set of keys and we see if can try to reach/ get to from the first room to the last room
        // for this we will use dfs i.e stack approach
        vector<bool> visited(rooms.size(), false);
        // we set the first room to true i.e we have visited it
        visited[0] = true;
        stack<int> stack;
        stack.push(0);
        int count = 1;
        while(!stack.empty()){
            vector<int> keys = rooms[stack.top()]; 
            stack.pop();
            for(int key : keys){
                if(!visited[key]){
                    visited[key] = true;
                    stack.push(key);
                    count++;
                }
            }  
        }
        return rooms.size() == count;
    }
};
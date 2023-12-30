class Solution {
public:
    bool isPathCrossing(string path) {
        // N, S, E, W
        int xDir[] = {0,0,1,-1};
        int yDir[] = {1,-1,0,0};
        unordered_map<int, unordered_set<int>> visited;
        int currXDirection = 0;
        int currYDirection = 0;
        visited[currXDirection].insert(currYDirection);
        for(auto& x : path){
            if(x == 'N'){
                currXDirection += xDir[0];
                currYDirection += yDir[0];
            }
            if(x == 'S'){
                currXDirection += xDir[1];
                currYDirection += yDir[1];
            }
            if(x == 'E'){
                currXDirection += xDir[2];
                currYDirection += yDir[2];
            }
            if(x == 'W'){
                currXDirection += xDir[3];
                currYDirection += yDir[3];
            }
            if (visited[currXDirection].count(currYDirection) > 0) {
                return true;
            } else {
                visited[currXDirection].insert(currYDirection);
            }
        }
        return false;
    }
};
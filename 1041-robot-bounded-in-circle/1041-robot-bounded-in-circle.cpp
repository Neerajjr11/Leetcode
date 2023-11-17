class Solution {
public:
    bool isRobotBounded(string instructions) {
        char dir = 'N';
        int x = 0;
        int y = 0;
        for(int i = 0; i < 1000; i++){
            for(auto&i : instructions){
                if(i == 'G'){
                    if(dir == 'N')
                        y++;
                    else if(dir == 'S')
                        y--;
                    else if(dir == 'E')
                        x++;
                    else
                        x--;
                }
                else if(i == 'L'){
                    if(dir == 'N')
                        dir = 'W';
                    else if(dir == 'S')
                        dir = 'E';
                    else if(dir == 'E')
                        dir = 'N';
                    else 
                        dir = 'S';
                }
                else if(i == 'R'){
                    if(dir == 'N')
                        dir = 'E';
                    else if(dir == 'S')
                        dir = 'W';
                    else if(dir == 'E')
                        dir = 'S';
                    else
                        dir = 'N';
                }
            
            }
            if(x == 0 and y == 0)
                return true;
        }
        return false;
    }
};
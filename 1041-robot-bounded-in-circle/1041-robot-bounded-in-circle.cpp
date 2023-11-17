class Solution {
public:
    bool isRobotBounded(string instructions) {
        char dir = 'N';
        int x = 0;
        int y = 0;
        int has_rotated = 0;
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
//                     we add 1 based on the map drawn below
                has_rotated = (has_rotated + 1);
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
//                     we add 3 based on the map drawn below as 1 right is equal to 3 left turns
                has_rotated = (has_rotated + 3);
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
        // we mod by 4 to check if we have covered a full circle so if we have covered a full circle and still haven't reached x = 0 and y = 0 we will reach it at some future point as the robot repeats the instruction forever
        if(x == 0 and y == 0 ||  (has_rotated % 4) != 0)
            return true;
        else
            return false;
    }
};

   //      N (0)
   //         |
   // W (1) ------ E (3)
   //         |
   //      S (2)
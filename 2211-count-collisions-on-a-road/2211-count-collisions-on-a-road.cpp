class Solution {
public:
    int countCollisions(string directions) {
        // Take a left pointer, cars starting from left which are moving in left direction are never going to collide
        // take a right pointer, cars starting from right which are moving right side are never going to collide.
        // after this between left and right pointer count all cars except S as they will collide
        
        int n = directions.size();
        int left = 0, right = n - 1;
        while(left < n and directions[left] == 'L')
            left++;
        while(right >= 0 and directions[right] == 'R')
            right--;
        int collisions = 0;
        for(int i = left; i <= right; i++)
            if(directions[i] != 'S')
                collisions++;
        return collisions;
    }
};

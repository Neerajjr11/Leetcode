class Solution {
public:
    int countCollisions(string directions) {
        // Take a left pointer, cars starting from left having L won't collide
        // take a right pointer, cars starting from right having R won't collide
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

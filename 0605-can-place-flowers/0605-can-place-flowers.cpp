class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int prev, next;
        for(int i = 0; i < flowerbed.size(); i++){
            if(flowerbed[i] == 0){
                if(i == 0 or flowerbed[i - 1] == 0)
                    prev = 0;
                else
                    prev = 1;
                if(i == flowerbed.size() - 1 or flowerbed[i + 1] == 0)
                    next = 0;
                else
                    next = 1;
                if(prev == 0 and next == 0){
                    n--;
                    flowerbed[i] = 1;
                }
            }
        }
        return (n <= 0);
    }
};
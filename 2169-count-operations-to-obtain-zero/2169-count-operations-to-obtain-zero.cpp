class Solution {
public:
    int countOperations(int num1, int num2) {
        int count = 0;
        if(num1 == 0 or num2 == 0)
            return count;
        while(num1 != 0  and num2 != 0){
            if(num1 >= num2){
                num1 = num1 - num2;
                // cout<<num1;
                count++;
            }
            else
            {
                num2 = num2 - num1;
                // cout<<" "<<num2;
                count++;
            }
        }
        return count;
    }
};
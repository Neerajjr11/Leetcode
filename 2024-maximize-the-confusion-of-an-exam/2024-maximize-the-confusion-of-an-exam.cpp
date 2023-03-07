class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int j = 0, i = 0, n = answerKey.size();
        int countT = 0, countF = 0;
        int res = 0;
        while(j < n){
            if(answerKey[j] == 'T')
                countT++;
            else
                countF++;
            if(countT <= k or countF <= k){
                res = max(res, (j - i + 1));
                j++;
            }else{
                while(countT > k and countF > k){
                    if(answerKey[i] == 'T')
                        countT--;
                    else
                        countF--;
                    i++;
                }
                j++;
            }
        }
        return res;
    }
};
class Solution {
public:
    int minFlipsMonoIncr(string s) {
        //c == '1'
        //It will not impact our minimum flips just keep the record of count of 1
        // c == '0'
        // 2 conditions
        //1.Keep is as 0 and flip all the 1 so far ,for that we need to know about the count the  one so far
    // 2.Flip it to 1 and update our count_flip
    // Take the minmum of count_flip and count_one and update the count_flip because we want        minimum(dry run for 1110000)
        int count_flip = 0, count_one = 0;
        for (char c : s){ 
            if (c == '1')
                count_one++;
            else{
                count_flip++;
                count_flip = min(count_flip, count_one);
                }
        }
        return count_flip;
    }
};
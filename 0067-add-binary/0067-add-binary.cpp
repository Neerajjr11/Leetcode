class Solution {
public:
    string addBinary(string a, string b) {
//         i pointer with string length of a - 1 and we start adding from right to left
        int i = a.length() - 1;
//         j pointer with string length of b - 1
        int j = b.length() - 1;
//          carry to check carry after adding the two strings eg 1+1 = 2 therefore carry of 1
        int carry = 0;
//         sum to store the sum of both the binary characters
        int sum;
//         res to store the binary character in reverse order
        string res;
//         iterate over the loop until the both condition become false
        while(i>=0 || j>=0){
            // intizialize sum = carry first
            sum = carry;
            // Now, we subtract by '0' to convert the numbers from a char type into an int, so we can perform //operations on the numbers
            if(i>=0)
                sum += a[i--] - '0';
            if(j >= 0)
                sum += b[j--] - '0';
            // taking carry
            carry = sum > 1 ? 1 : 0;
            // getting carry depend on the quotient we get by dividing sum / 2 that will be our carry. Carry //could be either 1 or 0 
            // if sum is 0 res is 1 & then carry would be 0;
            // if sum is 1 res is 1 & carry would be 0
            // if sum is 2 res is 0 & carry would be 1
            // if sum is 3 res is 1 & carry would be 1
            res += to_string(sum % 2); // just moduling the sum so, we can get remainder and add it into our //result
            
        }
        if(carry)
            res += to_string(carry); // if carry not 0 then add to end of res
        reverse(res.begin(), res.end()); // finally reverse res to get the binary sum
        return(res);
    }
};
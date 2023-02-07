​
[P1] is defined as the array part just before the last 3 values. What I mean is something like [1,2,3,4]
[P2] is defined as the array part just after remaining values which we have to rotate [5,6,7]
image
​
So, in order to rotate this Array k times what we will do is, we will reverse the P1 first which become [4,3,2,1] & then we reverse P2 which becomes [7,6,5]
Now finally what we have to do is we gonna reverse the complete array by doing that what will happen is our array become [5,6,7,1,2,3,4] and that's what we want in our Output
​
image
​
But, what if we have k = 101, then we will not rotate it 101 times. It simply means till 100 times it will be [1,2,3,4,5,6,7] & we have to rotate only 1 time i.e. [7,1,2,3,4,5,6]. So, now your question is how can we handle this, we simply do the modulo of "k" with length of array
​
Okay Bonus point what if we have k = -1, then how can we rotate the array. If k is -1 then we have to rotate the value backward not in the front.
Eg -
Input : [1,2,3,4,5,6,7], k = -1
Output : [2,3,4,5,6,7,1]
​
Now how did we figure out this, if you carefully look that k = -1 is equals to k = 6.
Just look at the table which I have made for every possible k values
​
So, what It represent is that add the -ve value to the length of array. And you will get your answer!
I hope Approach is crystal clear now! Let's do some dirty work, "code it up"
​
code each line explained : Similar for C++, Java, Python {Only Syntax Difference} approach same
​
​
https://leetcode.com/problems/rotate-array/discuss/1730142/JavaC%2B%2BPython-A-very-very-well-detailed-explanation
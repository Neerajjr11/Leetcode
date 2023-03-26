We can treat each chunk as a range with (max value, min value) as a pair. Because we want to find the longest chunks, we need to treat each number as a range at first. ( 5: treat as range(5,5) )We use a stack to store these ranges. We need to merge the current range and previous range when current range's min value < previous range's max value. The answer is the number of ranges stored in the stack.
​
For example:
[2,1,3,4,4]
We first meet 2, set is as range with max and min value (2 , 2)
When we encounter 1 as (1,1), current range (1,1), the min value 1 is smaller than previous (2,2) max value 2. So we need to merge these two ranges as (2,1). For (3,3), min value 3 is larger than (2,1) max value 2, so we keep it. In the same way, we keep (4,4) and (4,4). Finally, in our stack, it is (2,1),(3,3),(4,4),(4,4). So the answer is 4.
​
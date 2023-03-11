For those trying to figure out how is it O(n):
Here we have defined 2 var i & j,
​
In case of O(n^2) for each outer loop, inner loop runs some n or m number of times to make it O(nm), that means, as soon as the outer loop finishes one iteration, inner loop resets itself.
In case of O(n2), as in this case, we are not resetting the inner inner variable i, it's just incrementing each time. It is like 2 loops one after another and both runs n number of time.
For finding the length of current sub-array (j-1):
If you have 2 pointer i and j with j >= i and you want to figure out the length of the subarray:
​
len = j-i+1
but here we have only
​
len = j-i
This is because, we have already incremented j by 1 position but not i, so no need to add 1.
Based on original post by yukuairoy.
​
Let's take example with negative and positive numbers, like:
​
[-4, -2, 0, 1, 3]
Since we need to put squeres in result array, we can consider that all numbers are positive (since: -4**2 = 4**2 = 16). Now our array looks like it sorted from middle to outside on both sides:
​
[4, 2, 0, 1, 3]
Now, we can have two pointers l to left most element, r to most right element.
Create res result array same size as A.
Move from right to left in res and past max(abs(A[l]), abs(A[r])), move correspondingly l++ or r--.
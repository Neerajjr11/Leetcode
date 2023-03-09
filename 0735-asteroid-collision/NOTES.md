According to the question, positive values are moving to the right and negative values are moving to the left. We can apply the concept of relative velocity and make positive values as fixed and negative values now moving with double velocity in the negative direction. But, magnitude of velocity does not matter only the direction matters.
​
Idea
​
Lets consider an example:-
​
[8, 9, 6, -7, -9, 12, 50, -34]
​
Start iterating from the beginning. Whenever we encounter a positive value, we don't have to do anything. Since they are fixed, they won't attack anyone. But the moment we sees a negative value, we are sure it is going to attack positive values.
​
Imagine [8, 9, 6] are happily sitting inside the array. The moment -7 enters, it will start knocking out positive values. This gives an idea we can use a stack to solve this problem.
​
Explanation
​
Lets see how to use this idea to code.
​
Consider the same example [8, 9, 6, -7, -9, 12, 50, -34]
Initially i = 0.
​
Whenever we encounter a positive value, we will simply push it to the stack.
The moment we encounter a negative value, we know some or all or zero positive values will be knocked out of the stack. The negative value may itself be knocked out or it may enter the stack.
We will keep on poping the elements from the stack while the asteroids[i] > s.top(). But remember, negative asteroids can never pop another negative asteroids, since they will never meet them. So, the final condition is while(!s.empty() and s.top() > 0 and s.top() < abs(ast[i])), we will pop the elements.
We have to take care of the case when s.top() == asteroids[i]. In this case one positive element will pop out and negative asteroid won't enter the stack.
If after knocking out elements stack becomes empty() or s.top() becomes negative, that means the current asteroids[i] will enter the stack.
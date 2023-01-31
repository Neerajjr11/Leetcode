Anytime I couldn't solve a problem, the above question bugged me alot. I have a train of thought which I use to get to the solution. Feel free to pick what works for you and device your own methods to arrive at solutions.
​
Thinking forward
In this train of thought, we first look at all information that is available to us. We are given 2 arrays of scores and age and the problem suggests that it has something to do with ordering w.r.t ages.
The word ordering quickly suggests that we can sort the input based on ages. ( But what kind of sort ? Ascending or Descending ? )
Will this sorting even take us closer to the solution ?
​
Jot down an example to answer yourself.
Let the scores array and ages array be the following ( Try to be as random as possible ) :
scores : [ 10, 2, 6, 4, 9 ]
ages. : [ 5, 1, 4, 5, 7]
​
Sorting the above array it by age (ASCENDING) leads me to ( If ages are equal sort ascending by score )
scores : [ 2, 6, 4, 10, 9 ]
ages. : [ 1, 4, 5, 5, 7]
​
Now that we get here, let's observe the constraints again.
Team is not allowed to have conflicts. A conflict exists if a younger player has a strictly higher score than an older player. A conflict does not occur between players of the same age.
​
Let's modify this statement for a pair of sorted arrays. Since the arrays are now sorted by age, any younger player comes before an older player. This means, IF I am choosing a bunch of players for my solution, THEN, in the order from left to right in scores array, I am allowed to choose scores as long as they are increasing --> More strictly, they arenon-decreasing because it is allowed for a score of younger player = score of older player.
With the scores being [ 2, 6, 4, 10, 9 ]
I can pick a team with [2, 4, 9] => Total = 15
I can pick a team with [2, 6, 10] => Total = 18
Note: In doing the above, I DID NOT consider the age array at all! Because, inherently, age of any element on the left is less than or equal to the ones of the right. (For i < j, age[i] <= age[j] )
​
Now I can reformulate the problem statement saying,
We are given one array (HERE Scores array) and we can choose any number of elements in the order from LEFT to RIGHT , PROVIDED that the sequence of elements I pick are non-decreasing.
​
To put it more formally,
We have to select a sequence S in the given array A, such that for this sequence S any pair of indices i, j should yeild S[i] <= S[j], and we have to maximize sum(S)
​
So far we have simplified whatever information that was given to us. Let's now go to the next step.
​
Thinking backwards
In this train of thought, we think What topics is this problem related to ?
Brainstorm your ideas in this step to find what is relevant to this problem. More formally, the questions you ask yourself are ( the following are random ideas just to see what sticks )
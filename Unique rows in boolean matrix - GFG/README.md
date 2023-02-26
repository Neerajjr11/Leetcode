# Unique rows in boolean matrix
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a binary matrix your task is to find all unique rows of the given matrix. </span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>row = 3, col = 4 
M[][] = {{1 1 0 1},{1 0 0 1},{1 1 0 1}}
<strong>Output: </strong>1 1 0 1 $1 0 0 1 $<strong>
Explanation: </strong>Above the matrix of size 3x4
looks like
1 1 0 1
1 0 0 1
1 1 0 1
The two unique rows are 1 1 0 1 and
1 0 0 1 .</span>
</pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You only need to implement the given function&nbsp;<strong>uniqueRow()</strong>.&nbsp;The function takes three arguments the first argument is a matrix <strong>M</strong> and the next two arguments are <strong>row</strong>&nbsp;and <strong>col</strong>&nbsp;denoting the rows and columns&nbsp;of the matrix.&nbsp;The function should <strong>return</strong> the list of the unique row of the martrix. Do not read input, instead use the arguments given in the function.</span></p>

<p><span style="font-size:18px"><strong>Note:&nbsp;</strong>The drivers code print the rows "$" separated.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(row * col)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(row * col)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1&lt;=row,col&lt;=40<br>
0&lt;=M[][]&lt;=1</span></p>
</div>
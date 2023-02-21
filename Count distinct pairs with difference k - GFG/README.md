# Count distinct pairs with difference k
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an integer array and a non-negative integer k, count all distinct pairs with difference equal to k, i.e., A[ i ] - A[ j ] = k<br>
&nbsp;</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>array = {1, 5, 4, 1, 2}, k = 0
<strong>Output: </strong>1
<strong>Explanation: </strong>There is only one pair (1, 1)
whose difference equal to 0.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2;</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>array = {1, 5, 3}, k = 2</span>
<span style="font-size:18px"><strong>Output: </strong>2
<strong>Explanation: </strong>There are two pairs (5, 3) and 
(1, 3) whose difference equal to 2.</span>
</pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read or print anything. Your task is to complete the function&nbsp;<strong>TotalPairs()</strong>&nbsp;which takes array and k as input parameter and returns count of all distinct pairs.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(Max(A<sub>i</sub>))<br>
<strong>Expected Space Complexity:&nbsp;</strong>O(Max(A<sub>i</sub>))</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
0 &lt;= length of array, k &lt;= 100000</span><br>
<span style="font-size:18px">1 &lt;= elements of array &lt;= 100000</span></p>
</div>
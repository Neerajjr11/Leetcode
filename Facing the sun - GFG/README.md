# Facing the sun
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an array <strong>H</strong> representing heights of buildings. You have to count the buildings which will see the sunrise (Assume : Sun rise on the side of array starting point).<br>
<strong>Note :</strong> Height of building should be strictly greater than height of buildings in left in order to see the sun.</span><br>
<span style="font-size:18px"><img alt="" src="https://contribute.geeksforgeeks.org/wp-content/uploads/Building.png" style="height:484px; width:676px"></span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong> 
N = 5
H[] = {7, 4, 8, 2, 9}
<strong>Output:</strong> 3
<strong>Explanation:</strong> As 7 is the first element, it
can see the sunrise. 4 can't see the
sunrise as 7 is hiding it.  8 can see.
2 can't see the sunrise. 9 also can see
the sunrise.
</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong> 
N = 4
H[] = {2, 3, 4, 5}
<strong>Output:</strong> 4
<strong>Explanation:</strong> As 2 is the first element, it
can see the sunrise.  3 can see the
sunrise as 2 is not hiding it. Same for 4
and 5, they also can see the sunrise.
</span></pre>

<p><span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>countBuildings</strong><strong>()</strong>&nbsp;which takes the&nbsp;array of&nbsp;integers <strong>h&nbsp;</strong>and&nbsp;<strong>n</strong><strong>&nbsp;</strong>as parameters and returns an integer denoting the answer.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>6</sup><br>
1 ≤ H<sub>i</sub> ≤ 10<sup>8</sup></span></p>

<p>&nbsp;</p>
</div>
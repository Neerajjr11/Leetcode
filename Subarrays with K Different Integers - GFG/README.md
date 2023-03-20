# Subarrays with K Different Integers
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an integer array <strong>arr</strong> of size<strong> N</strong> and an integer <strong>k</strong>, return the number of <strong>good</strong> <strong>subarrays</strong> of arr.<br>
A <strong>good array</strong> is an array where the number of different integers in that is <strong>exactly k</strong>.</span></p>

<ul>
	<li><span style="font-size:18px">For example, {1, 3, 4, 4, 1} has 3 different integers: 1, 3, and 4.</span></li>
</ul>

<p><span style="font-size:18px">Note : A <strong>subarray</strong> is a <strong>contiguous</strong> part of an array.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<div style="background: rgb(238, 238, 238); border: 1px solid rgb(204, 204, 204); padding: 5px 10px; --darkreader-inline-bgimage: initial; --darkreader-inline-bgcolor:#222426; --darkreader-inline-border-top:#3e4446; --darkreader-inline-border-right:#3e4446; --darkreader-inline-border-bottom:#3e4446; --darkreader-inline-border-left:#3e4446;"><span style="font-size:18px"><strong>Input:</strong><br>
N = 5<br>
k = 2<br>
arr[ ] = {1, 2, 1, 2, 3}<br>
<strong>Output: </strong>7<br>
<strong>Explanation:</strong>&nbsp;Subarrays formed with exactly 2 different integers: {1, 2},&nbsp;{2, 1},&nbsp;{1, 2},&nbsp;{2, 3},&nbsp;{1, 2, 1},&nbsp;{2, 1, 2},&nbsp;{1, 2, 1, 2}.</span></div>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<div style="background: rgb(238, 238, 238); border: 1px solid rgb(204, 204, 204); padding: 5px 10px; --darkreader-inline-bgimage: initial; --darkreader-inline-bgcolor:#222426; --darkreader-inline-border-top:#3e4446; --darkreader-inline-border-right:#3e4446; --darkreader-inline-border-bottom:#3e4446; --darkreader-inline-border-left:#3e4446;"><span style="font-size:18px"><strong>Input:</strong><br>
N = 5<br>
k = 3<br>
arr[ ] = {1, 2, 1, 3, 4}<br>
<strong>Output: </strong>3</span></div>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>subarrayCount()</strong>&nbsp;which takes the&nbsp;array of&nbsp;integers <strong>arr&nbsp;, </strong>an integer&nbsp;<strong>N </strong>and<strong> k&nbsp;</strong>as parameters and returns a number of good subarrays.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(N)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>5</sup><br>
1 ≤ k&nbsp;≤ N<br>
<sup>1&nbsp;</sup>≤ arr<sub>i&nbsp; </sub>≤ N</span></p>
</div>
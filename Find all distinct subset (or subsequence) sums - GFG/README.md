# Find all distinct subset (or subsequence) sums
## Medium
<div class="problems_problem_content__Xm_eO" speechify-initial-font-family="Nunito" speechify-initial-font-size="16px"><p speechify-initial-font-family="Nunito" speechify-initial-font-size="17px"><span style="font-size:18px" speechify-initial-font-family="Nunito" speechify-initial-font-size="17px">Given a set of integers, find all distinct sums that can be generated from the subsets of the given sets.</span><br speechify-initial-font-family="Nunito" speechify-initial-font-size="17px">
&nbsp;</p>

<p speechify-initial-font-family="Nunito" speechify-initial-font-size="17px"><span style="font-size:18px" speechify-initial-font-family="Nunito" speechify-initial-font-size="17px"><strong speechify-initial-font-family="&quot;Source Sans 3&quot;" speechify-initial-font-size="17px">Example 1:</strong></span></p>

<pre speechify-initial-font-family="Nunito" speechify-initial-font-size="17px"><span style="font-size:18px" speechify-initial-font-family="Nunito" speechify-initial-font-size="17px"><strong speechify-initial-font-family="&quot;Source Sans 3&quot;" speechify-initial-font-size="17px">Input: </strong>nums = {1,2}
<strong speechify-initial-font-family="&quot;Source Sans 3&quot;" speechify-initial-font-size="17px">Output: </strong>{0,1,2,3}
<strong speechify-initial-font-family="&quot;Source Sans 3&quot;" speechify-initial-font-size="17px">Explanation: </strong>Four distinct sums can be
calculated which are 0, 1, 2 and 3.
0 if we do not choose any number.
1 if we choose only 1.
2 if we choose only 2.
3 if we choose 1 and 2.</span>

</pre>

<p speechify-initial-font-family="Nunito" speechify-initial-font-size="17px"><span style="font-size:18px" speechify-initial-font-family="Nunito" speechify-initial-font-size="17px"><strong speechify-initial-font-family="&quot;Source Sans 3&quot;" speechify-initial-font-size="17px">Example 2:</strong></span></p>

<pre speechify-initial-font-family="Nunito" speechify-initial-font-size="17px"><span style="font-size:18px" speechify-initial-font-family="Nunito" speechify-initial-font-size="17px"><strong speechify-initial-font-family="&quot;Source Sans 3&quot;" speechify-initial-font-size="17px">Input: </strong>nums = {1,2,3}
<strong speechify-initial-font-family="&quot;Source Sans 3&quot;" speechify-initial-font-size="17px">Output: </strong>{0,1,2,3,4,5,6}
<strong speechify-initial-font-family="&quot;Source Sans 3&quot;" speechify-initial-font-size="17px">Explanation: </strong>Seven distinct sum can be calculated
which are 0, 1, 2, 3, 4, 5 and 6.
0 if we do not choose any number.
1 if we choose only 1.
2 if we choose only 2.
3 if we choose only 3.
4 if we choose 1 and 3.
5 if we choose 2 and 3.
6 if we choose 1, 2 and 3.</span>

</pre>

<p speechify-initial-font-family="Nunito" speechify-initial-font-size="17px">&nbsp;</p>

<p speechify-initial-font-family="Nunito" speechify-initial-font-size="17px"><span style="font-size:18px" speechify-initial-font-family="Nunito" speechify-initial-font-size="17px"><strong speechify-initial-font-family="&quot;Source Sans 3&quot;" speechify-initial-font-size="17px">Your Task:</strong><br speechify-initial-font-family="Nunito" speechify-initial-font-size="17px">
You don't need to read or print anything. Your task is to complete the function&nbsp;<strong speechify-initial-font-family="&quot;Source Sans 3&quot;" speechify-initial-font-size="17px">DistinictSum()&nbsp;</strong>which takes nums as input parameter and returns a list containing the distinict sum in increasing order,</span><br speechify-initial-font-family="Nunito" speechify-initial-font-size="17px">
&nbsp;</p>

<p speechify-initial-font-family="Nunito" speechify-initial-font-size="17px"><span style="font-size:18px" speechify-initial-font-family="Nunito" speechify-initial-font-size="17px"><strong speechify-initial-font-family="&quot;Source Sans 3&quot;" speechify-initial-font-size="17px">Expected Time Complexity:&nbsp;</strong>O(n * sum) where sum = sum of all elements of nums.<br speechify-initial-font-family="Nunito" speechify-initial-font-size="17px">
<strong speechify-initial-font-family="&quot;Source Sans 3&quot;" speechify-initial-font-size="17px">Expected Space Complexity:&nbsp;</strong>O(n * sum)</span><br speechify-initial-font-family="Nunito" speechify-initial-font-size="17px">
&nbsp;</p>

<p speechify-initial-font-family="Nunito" speechify-initial-font-size="17px"><span style="font-size:18px" speechify-initial-font-family="Nunito" speechify-initial-font-size="17px"><strong speechify-initial-font-family="&quot;Source Sans 3&quot;" speechify-initial-font-size="17px">Constraints:</strong><br speechify-initial-font-family="Nunito" speechify-initial-font-size="17px">
1 &lt;= length of nums &lt;= 10<sup speechify-initial-font-family="Nunito" speechify-initial-font-size="17px">2</sup></span><br speechify-initial-font-family="Nunito" speechify-initial-font-size="17px">
<span style="font-size:18px" speechify-initial-font-family="Nunito" speechify-initial-font-size="17px">1 &lt;= nums[i] &lt;= 10</span><sup speechify-initial-font-family="Nunito" speechify-initial-font-size="17px">2</sup></p>
</div>
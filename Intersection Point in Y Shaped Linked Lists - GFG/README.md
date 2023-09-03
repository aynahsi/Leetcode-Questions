# Intersection Point in Y Shaped Linked Lists
## Medium
<div class="problems_problem_content__Xm_eO"><p speechify-initial-font-size="17px" style="font-size: 17px;"><span style="font-size: 17px;" speechify-initial-font-size="17px">Given two singly linked lists of size <strong speechify-initial-font-size="17px" style="font-size: 17px;">N</strong> and <strong speechify-initial-font-size="17px" style="font-size: 17px;">M, </strong>write a program to get the point where two linked lists intersect each other.</span></p>

<p speechify-initial-font-size="17px" style="font-size: 17px;">&nbsp;</p>

<p speechify-initial-font-size="17px" style="font-size: 17px;"><span style="font-size: 17px;" speechify-initial-font-size="17px"><strong speechify-initial-font-size="17px" style="font-size: 17px;">Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong speechify-initial-font-size="17px" style="font-size: 17px;">Input:</strong><strong speechify-initial-font-size="17px" style="font-size: 17px;">
</strong>LinkList1 = 3-&gt;6-&gt;9-&gt;common
LinkList2 = 10-&gt;common
common = 15-&gt;30-&gt;NULL
<strong speechify-initial-font-size="17px" style="font-size: 17px;">Output: 1</strong>5
<strong speechify-initial-font-size="17px" style="font-size: 17px;">Explanation:
</strong><img alt="Y ShapedLinked List" class="aligncenter size-full wp-image-2753" src="https://contribute.geeksforgeeks.org/wp-content/uploads/linked.jpg" style="height:334px; width:388px" title="Y ShapedLinked List"></span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: 
</strong>Linked List 1 = 4-&gt;1-&gt;common
Linked List 2 = 5-&gt;6-&gt;1-&gt;common
common = 8-&gt;4-&gt;5-&gt;NULL
<strong>Output: </strong>8
<strong>Explanation: </strong></span>

<span style="font-size:18px"><strong>4              5</strong></span>
<span style="font-size:18px"><strong>|              |</strong></span>
<span style="font-size:18px"><strong>1              6
</strong></span><span style="font-size:18px"><strong> \             /</strong></span>
<span style="font-size:18px"><strong>  8   -----  1 </strong></span>
   <strong>|</strong>
   <strong>4</strong>
   <strong>|
</strong><span style="font-size:18px"><strong>  5</strong></span>
<span style="font-size:18px"><strong>  |</strong></span>
<span style="font-size:18px"><strong>  NULL       </strong></span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. The task is to complete the function <strong>intersetPoint</strong>() which takes the pointer to the head of linklist1(<strong>head1</strong>) and linklist2(<strong>head2</strong>) as input parameters and&nbsp;returns data value of a node where two linked lists intersect. If linked list do not merge at any point, then it should&nbsp;return <strong>-1</strong>.</span><br>
<span style="font-size:18px"><strong>Challenge </strong>: Try to solve the problem without using any extra space.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N+M)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N + M ≤&nbsp;2*10<sup>5</sup><br>
-1000&nbsp;≤&nbsp;value ≤&nbsp;1000</span></p>

<p>&nbsp;</p>
</div>
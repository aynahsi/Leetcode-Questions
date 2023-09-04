# Rotate a Linked List
## Medium
<div class="problems_problem_content__Xm_eO" speechify-initial-font-family="Roboto, sans-serif" speechify-initial-font-size="16px"><p speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;"><span style="font-size: 17px; font-family: urw-din;" speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">Given a singly linked list of size <strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;">N</strong>. The task is to <strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;">left-shift</strong> the linked list by <strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;">k</strong> nodes, where <strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;">k</strong> is a given positive integer smaller than or equal to length of the linked list. </span></p>

<p speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;"><span style="font-size: 17px; font-family: urw-din;" speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;">Example 1:</strong></span></p>

<pre speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;"><span style="font-size: 17px; font-family: urw-din;" speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;">Input:
</strong>N = 5
value[] = {2, 4, 7, 8, 9}
k = 3
<strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;">Output: </strong>8 9 2 4 7<strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;">
Explanation:</strong></span>
<span style="font-size: 17px; font-family: urw-din;" speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;">Rotate 1:&nbsp;</strong>4 -&gt; 7 -&gt; 8 -&gt; 9 -&gt; 2</span>
<span style="font-size: 17px; font-family: urw-din;" speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;">Rotate 2:</strong>&nbsp;7&nbsp;-&gt; 8&nbsp;-&gt; 9&nbsp;-&gt; 2&nbsp;-&gt; 4</span>
<span style="font-size: 17px; font-family: urw-din;" speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;">Rotate 3:</strong>&nbsp;8&nbsp;-&gt; 9&nbsp;-&gt; 2&nbsp;-&gt; 4&nbsp;-&gt; 7</span>
</pre>

<p speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;"><span style="font-size: 17px; font-family: urw-din;" speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;">Example 2:</strong></span></p>

<pre speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><span style="font-size:18px" speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;">Input:
</strong>N = 8
value[] = {1, 2, 3, 4, 5, 6, 7, 8}
k = 4
<strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">Output: </strong>5 6 7 8 1 2 3 4</span>
</pre>

<p speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">
<span style="font-size:18px" speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">Your Task:</strong><br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">
You don't need to read input or print anything. Your task is to complete the function <strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">rotate</strong>() which takes a&nbsp;<strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">head </strong>reference as the <strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">first argument </strong>and <strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">k</strong> as the <strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">second argument,&nbsp;</strong>and returns the head of the rotated linked list.</span></p>

<p speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><span style="font-size:18px" speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">Expected Time Complexity:&nbsp;</strong>O(N).<br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">
<strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">Expected Auxiliary Space:&nbsp;</strong>O(1).</span></p>

<p speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><span style="font-size:18px" speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">Constraints:</strong><br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">
1 &lt;= N &lt;= 10<sup speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">3</sup><br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">
1 &lt;= k &lt;= N</span></p>
</div>
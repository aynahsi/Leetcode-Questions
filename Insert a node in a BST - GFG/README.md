# Insert a node in a BST
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a <strong>BST</strong> and a key <strong>K</strong>. If K is not present in the BST, Insert a new Node with a value equal to K into the BST. If K is already present in the BST, don't modify the BST.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>&nbsp; &nbsp; &nbsp;2
&nbsp;  /&nbsp;&nbsp; \ &nbsp; 1&nbsp;  &nbsp; 3
K = 4
<strong speechify-initial-font-size="15px" style="font-size: 15px;">Output: <br speechify-initial-font-size="15px" style="font-size: 15px;"></strong>1 2 3 4<strong speechify-initial-font-size="15px" style="font-size: 15px;">
Explanation: <br speechify-initial-font-size="15px" style="font-size: 15px;"></strong>After inserting the node 4
Inorder traversal will be 1 2 3 4.</span>
</pre>
<p speechify-initial-font-size="15px" style="font-size: 15px;"><span style="font-size: 15px;" speechify-initial-font-size="15px"><strong speechify-initial-font-size="15px" style="font-size: 15px;">Example 2:</strong></span></p>
<pre speechify-initial-font-size="15px" style="font-size: 15px;"><span style="font-size: 15px;" speechify-initial-font-size="15px"><strong speechify-initial-font-size="15px" style="font-size: 15px;">Input:
</strong>&nbsp; &nbsp; &nbsp; &nbsp;&nbsp;2
&nbsp; &nbsp; &nbsp;&nbsp;/&nbsp;&nbsp; \
 &nbsp; &nbsp; 1 &nbsp; &nbsp; 3
 &nbsp;  &nbsp; &nbsp; &nbsp;   &nbsp;\
 &nbsp;  &nbsp;&nbsp; &nbsp; &nbsp;   &nbsp;6
K = 4
<strong speechify-initial-font-size="15px" style="font-size: 15px;">Output: <br speechify-initial-font-size="15px" style="font-size: 15px;"></strong>1 2 3 4 6<strong speechify-initial-font-size="15px" style="font-size: 15px;">
Explanation: <br speechify-initial-font-size="15px" style="font-size: 15px;"></strong>After inserting the node 4
Inorder traversal of the above tree will be 1 2 3 4 6.</span></pre>
<p speechify-initial-font-size="15px" style="font-size: 15px;"><span style="font-size: 15px;" speechify-initial-font-size="15px"><strong speechify-initial-font-size="15px" style="font-size: 15px;">Your Task:</strong><br speechify-initial-font-size="15px" style="font-size: 15px;">You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong speechify-initial-font-size="15px" style="font-size: 15px;">insert()</strong>&nbsp;which takes the root of the BST and Key K as input parameters&nbsp;and returns the root of the modified BST after inserting K.&nbsp;<br speechify-initial-font-size="15px" style="font-size: 15px;"><strong speechify-initial-font-size="15px" style="font-size: 15px;">Note: </strong>The generated output contains the inorder traversal of the modified tree.</span></p>
<p><span style="font-size: 18px;"><strong speechify-initial-font-size="15px" style="font-size: 15px;">Expected Time Complexity:</strong>&nbsp;O(Height of the BST).<br speechify-initial-font-size="15px" style="font-size: 15px;"><strong>Expected Auxiliary Space:</strong>&nbsp;O(Height of the BST).</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= Number of nodes initially in BST &lt;= 10<sup>5</sup></span><br><span style="font-size: 18px;">1 &lt;= K &lt;= 10<sup>9</sup></span></p></div>
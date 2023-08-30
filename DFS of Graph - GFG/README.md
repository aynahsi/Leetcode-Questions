# DFS of Graph
## Easy
<div class="problems_problem_content__Xm_eO" speechify-initial-font-family="Roboto, sans-serif" speechify-initial-font-size="16px"><p speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;"><span style="font-size: 17px; font-family: urw-din;" speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">You are given a connected undirected graph. Perform a Depth First Traversal of the graph.</span><br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;"><span style="font-size: 17px; font-family: urw-din;" speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;">Note: </strong>Use the recursive approach to</span><span style="font-size: 17px; font-family: urw-din;" speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">&nbsp;find the DFS traversal of the graph starting from the 0th vertex from left to right according to the graph.</span></p>
<p speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;"><br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;"><span style="font-size: 17px; font-family: urw-din;" speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;">Example 1:</strong></span></p>
<pre speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><span style="font-size: 17px; font-family: urw-din;" speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;">Input: </strong>V = 5 , adj = [[2,3,1] , [0], [0,4], [0], [2]]
</span><img style="height: 300px; width: 300px;" src="https://media.geeksforgeeks.org/img-practice/graph-1659528381.png" alt="" speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><span style="font-size: 18px;" speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">
<strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">Output:</strong> 0 2 4 3 1
<strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">Explanation</strong>: 
0 is connected to 2, 3, 1.
1 is connected to 0.
2 is connected to 0 and 4.
3 is connected to 0.
4 is connected to 2.
so starting from 0, it will go to 2 then 4,
and then 3 and 1.
Thus dfs will be 0 2 4 3 1.</span>
</pre>
<p speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><span style="font-size: 18px;" speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">Example 2:</strong></span></p>
<pre speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><span style="font-size: 18px;" speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">Input:</strong> V = 4, adj = [[1,3], [2,0], [1], [0]]
</span><img style="height: 300px; width: 300px;" src="https://media.geeksforgeeks.org/img-practice/graph(1)-1659528893.png" alt="" speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><span style="font-size: 18px;" speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">
<strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">Output:</strong> 0 1 2 3
<strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">Explanation</strong>:
0 is connected to 1 , 3.
1 is connected to 0, 2. 
2 is connected to 1.
3 is connected to 0. 
so starting from 0, it will go to 1 then 2
then back to 0 then 0 to 3
thus dfs will be 0 1 2 3. </span>
</pre>
<p speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><span style="font-size: 18px;" speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">Your task:</strong><br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">dfsOfGraph()</strong>&nbsp;which takes the integer V denoting the number of vertices and adjacency list as input parameters and returns a list containing the DFS traversal of the graph starting from the 0th vertex from left to right according to the graph.</span></p>
<p speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><span style="font-size: 18px;" speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">Expected Time Complexity:&nbsp;</strong>O(V + E)<br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">Expected Auxiliary Space:&nbsp;</strong>O(V)</span></p>
<p speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><span style="font-size: 18px;" speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">Constraints:</strong><br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">1 ≤ V, E ≤ 10<sup speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">4</sup></span></p></div>
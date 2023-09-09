# Stock span problem
## Medium
<div class="problems_problem_content__Xm_eO" speechify-initial-font-family="Roboto, sans-serif" speechify-initial-font-size="16px"><p speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;"><span style="font-size: 17px; font-family: urw-din;" speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">The stock span problem is a financial problem where we have a series of <strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;">n</strong> daily price quotes for a stock and we need to calculate the span of stocks price for all <strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;">n</strong> days.&nbsp;<br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;">
The span <strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;">S<sub speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;">i</sub></strong> of the stocks price on a given day <strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;">i</strong> is defined as the maximum number of consecutive days just before the given day, for which the price of the stock on the current day is less than or equal to its price on the given day.<br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;">
For example, if an array of 7 days prices is given as {100, 80, 60, 70, 60, 75, 85}, then the span values for corresponding 7 days are {1, 1, 1, 2, 1, 4, 6}.</span></p>

<p speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;"><span style="font-size: 17px; font-family: urw-din;" speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;">Example 1:</strong></span></p>

<pre speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><span style="font-size:18px" speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px" style="font-family: urw-din; font-size: 17px;">Input</strong>: 
N = 7, price[] = [100 80 60 70 60 75 85]
<strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">Output</strong>:
1 1 1 2 1 4 6
<strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">Explanation</strong>:
Traversing the given input span for&nbsp;100 
will be 1, 80 is smaller than 100 so the 
span is 1, 60 is smaller than 80 so the 
span is 1, 70 is greater than 60 so the 
span is 2 and so on. Hence the output will 
be 1 1 1 2 1 4 6.
</span></pre>

<p speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><span style="font-size:18px" speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">Example 2:</strong></span></p>

<pre speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><span style="font-size:18px" speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">Input</strong>: 
N = 6, price[] = [10 4 5 90 120 80]
<strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">Output</strong>:
1 1 2 4 5 1
<strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">Explanation</strong>:
Traversing the given input span for 10 
will be 1, 4 is smaller than 10 so the 
span will be 1, 5 is greater than 4 so 
the span will be 2 and so on. Hence, the 
output will be&nbsp;1 1 2 4 5 1.</span></pre>

<p speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><span style="font-size:18px" speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">User Task:</strong><br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">
The task is to complete the function&nbsp;<strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">calculateSpan</strong>() which takes two parameters, an array<strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"> price[] </strong>denoting the price of stocks, and an integer <strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">N </strong>denoting the size of the array and number of days. This function finds the span of stock's price for all N&nbsp;days and returns an array of length <strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">N</strong> denoting the span for the i-th day.</span></p>

<p speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><span style="font-size:18px" speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">Expected Time Complexity:&nbsp;</strong>O(N).<br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">
<strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">Expected Auxiliary Space:&nbsp;</strong>O(N).</span></p>

<p speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><span style="font-size:18px" speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><strong speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">Constraints:</strong><br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">
1 ≤ N ≤ 10<sup speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">5</sup><br speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">
1 ≤ C[i] ≤ 10<sup speechify-initial-font-family="urw-din" speechify-initial-font-size="17px">5</sup></span></p>

<p speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><span style="font-size:18px" speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"><img alt="" src="https://contribute.geeksforgeeks.org/wp-content/uploads/Stock_span.png" speechify-initial-font-family="urw-din" speechify-initial-font-size="17px"></span></p>
</div>
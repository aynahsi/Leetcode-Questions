# Non-overlapping Intervals
## Medium
<div class="problems_problem_content__Xm_eO"><p speechify-initial-font-size="17px" style="font-size: 17px;"><span style="font-size: 17px;" speechify-initial-font-size="17px">Given an 2D array<strong speechify-initial-font-size="17px" style="font-size: 17px;">&nbsp;intervals </strong>of size <strong speechify-initial-font-size="17px" style="font-size: 17px;">N</strong> representing intervals where <strong speechify-initial-font-size="17px" style="font-size: 17px;">intervals [ i ] = [start<sub speechify-initial-font-size="17px" style="font-size: 17px;">i</sub>, end<sub speechify-initial-font-size="17px" style="font-size: 17px;">i&nbsp;</sub>)</strong>, return the<strong speechify-initial-font-size="17px" style="font-size: 17px;"> minimum</strong> number of intervals you need to remove to make the rest of the intervals <strong speechify-initial-font-size="17px" style="font-size: 17px;">non-overlapping</strong>.</span><br speechify-initial-font-size="17px" style="font-size: 17px;">&nbsp;</p>
<p speechify-initial-font-size="17px" style="font-size: 17px;"><span style="font-size: 17px;" speechify-initial-font-size="17px"><strong speechify-initial-font-size="17px" style="font-size: 17px;">Example 1:</strong></span></p>
<pre style="background: rgb(238, 238, 238); border: 1px solid rgb(204, 204, 204); padding: 5px 10px; --darkreader-inline-bgimage: initial; --darkreader-inline-bgcolor: #222426; --darkreader-inline-border-top: #3e4446; --darkreader-inline-border-right: #3e4446; --darkreader-inline-border-bottom: #3e4446; --darkreader-inline-border-left: #3e4446; font-size: 17px;" speechify-initial-font-size="17px"><span style="font-size: 17px;" speechify-initial-font-size="17px"><strong speechify-initial-font-size="17px" style="font-size: 17px;">Input:</strong><br speechify-initial-font-size="17px" style="font-size: 17px;">N = 4<br speechify-initial-font-size="17px" style="font-size: 17px;">intervals [ ] = {{1, 2}, {2, 3}, {3, 4}, {1, 3}}<br speechify-initial-font-size="17px" style="font-size: 17px;"><strong speechify-initial-font-size="17px" style="font-size: 17px;">Output: </strong>1<br speechify-initial-font-size="17px" style="font-size: 17px;"><strong speechify-initial-font-size="17px" style="font-size: 17px;">Explanation:</strong>&nbsp;<br speechify-initial-font-size="17px" style="font-size: 17px;">{1, 3} can be removed and the rest of the intervals are non-overlapping.</span></pre>
<p>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre style="background: #eeeeee; border: 1px solid #cccccc; padding: 5px 10px; --darkreader-inline-bgimage: initial; --darkreader-inline-bgcolor: #222426; --darkreader-inline-border-top: #3e4446; --darkreader-inline-border-right: #3e4446; --darkreader-inline-border-bottom: #3e4446; --darkreader-inline-border-left: #3e4446;"><span style="font-size: 18px;"><strong>Input:</strong><br>N = 3<br>intervals [ ] = {{1, 3}, {1, 3}, {1, 3}}<br><strong>Output:</strong> 2<br><strong>Explanation:</strong>&nbsp;<br>You need to remove two {1, 3} to make the rest of the intervals non-overlapping.</span></pre>
<p>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything. Your task is to complete the function <strong>minRemoval()</strong> which takes the integer <strong>N&nbsp;</strong>and 2D integer array <strong>intervals [ ] </strong>as parameters and returns the <strong>minimum</strong> number of intervals need to remove in order to make the remaining intervals non-overlapping.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong>&nbsp;O(NlogN)<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ N ≤&nbsp; 10<sup>5</sup><br>|intervals<sub>i</sub>|&nbsp;== 2<br>-5*10<sup>4&nbsp;</sup>≤ start<sub>i&nbsp;</sub>&lt; end<sub>i</sub>&nbsp;&lt;=5*10<sup>4</sup></span></p>
<p>&nbsp;</p></div>
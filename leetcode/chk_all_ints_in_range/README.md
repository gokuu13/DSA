# Check if All the Integers in a Range Are Covered

You are given a 2D integer array ranges and two integers $left$ and $right$.  
Each $ranges[i] = [start_i, end_i]$ represents an inclusive interval between  
$start_i$ and $end_i$.

Return true if each integer in the inclusive range $[left, right]$ is covered  
by at least one interval in ranges. Return false otherwise.

An integer x is covered by an interval $ranges[i] = [start_i, end_i]$ if  
$start_i \le x \le end_i$.

 

## Example 1:

    Input: ranges = [[1,2],[3,4],[5,6]], left = 2, right = 5
    Output: true
    Explanation: 
        Every integer between 2 and 5 is covered:
        - 2 is covered by the first range.
        - 3 and 4 are covered by the second range.
        - 5 is covered by the third range.

## Example 2:

    Input: ranges = [[1,10],[10,20]], left = 21, right = 21
    Output: false
    Explanation: 
        21 is not covered by any range.
        
        
        
## Constraints:

* $1 \le ranges.length \le 50$
* $1 \le start_i \le end_i \le 50$
* $1 \le left \le right \le 50$


# Matrix Block Sum

Given a m x n matrix mat and an integer k, return a matrix answer where each  
$answer[i][j]$ is the sum of all elements $mat[r][c]$ for:

* $i - k \le r \le i + k$
* $j - k \le c \le j + k$
* $(r, c)$ is a valid position in the matrix.

 

## Example 1:

    Input: mat = [[1,2,3],[4,5,6],[7,8,9]], k = 1
    Output: [[12,21,16],[27,45,33],[24,39,28]]

## Example 2:

    Input: mat = [[1,2,3],[4,5,6],[7,8,9]], k = 2
    Output: [[45,45,45],[45,45,45],[45,45,45]]

 

## Constraints:

* $m = mat.length$
* $n = mat[i].length$
* $1 \le m, n, k \le 100$
* $1 \le mat[i][j] \le 100$


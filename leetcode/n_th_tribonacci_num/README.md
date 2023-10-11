# N-th Tribonacci Number

The Tribonacci sequence Tn is defined as follows: 

$T_0 = 0$, $T_1 = 1$,   
$T_2 = 1$, and $T_{n+3} = T_n + T_{n+1} + T_{n+2}$  
&emsp;for $n \ge 0$.

Given n, return the value of Tn.

 

## Example 1:

    Input: n = 4
    Output: 4
    Explanation:
        T_3 = 0 + 1 + 1 = 2
        T_4 = 1 + 1 + 2 = 4

## Example 2:

    Input: n = 25
    Output: 1389537
    
        
        
## Constraints:

* $0 \le n \le 37$
* The answer is guaranteed to fit within a 32-bit integer, ie. 
    $answer \le 2^31 - 1$.

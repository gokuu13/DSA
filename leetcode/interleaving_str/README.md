# Interleaving String

Given strings s1, s2, and s3, find whether s3 is formed by an interleaving  
of s1 and s2.

An interleaving of two strings s and t is a configuration where s and t are  
divided into n and m substrings respectively, such that:

* $s = s_1 + s_2 + ... + s_n$
* $t = t_1 + t_2 + ... + t_m$
* $|n - m| \le 1$
* The interleaving is $s_1 + t_1 + s_2 + t_2 + s_3 + t_3 + ...$ or  
$t_1 + s_1 + t_2 + s_2 + t_3 + s_3 + ...$

**Note:** a + b is the concatenation of strings a and b.

 

## Example 1:

    Input: s1 = "aabcc", s2 = "dbbca", s3 = "aadbbcbcac"
    Output: true
    Explanation: 
        One way to obtain s3 is:
        Split s1 into s1 = "aa" + "bc" + "c", and s2 into 
                s2 = "dbbc" + "a".

        Interleaving the two splits, we get
            "aa" + "dbbc" + "bc" + "a" + "c" = "aadbbcbcac".

        Since s3 can be obtained by interleaving s1 and s2, we return 
            true.

## Example 2:

    Input: s1 = "aabcc", s2 = "dbbca", s3 = "aadbbbaccc"
    Output: false
    Explanation: 
        Notice how it is impossible to interleave s2 with any other string 
            to obtain s3.

## Example 3:

    Input: s1 = "", s2 = "", s3 = ""
    Output: true

 

## Constraints:

* $0 \le s1.length, s2.length \le 100$
* $0 \le s3.length \le 200$
* s1, s2, and s3 consist of lowercase English letters.

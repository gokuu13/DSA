# Longest Word in Dictionary Through Deleting

Given a string s and a string array dictionary, return the longest string in  
the dictionary that can be formed by deleting some of the given string  
characters. If there is more than one possible result, return the longest  
word with the smallest lexicographical order. If there is no possible result,  
return the empty string.

 

## Example 1:

    Input: 
        s = "abpcplea"
        dictionary = ["ale","apple","monkey","plea"]
    Output: "apple"

## Example 2:

    Input: 
        s = "abpcplea"
        dictionary = ["a","b","c"]
    Output: "a"

 

## Constraints:

* $1 \le s.length \le 1000$
* $1 \le dictionary.length \le 1000$
* $1 \le dictionary[i].length \le 1000$
* s and dictionary[i] consist of lowercase English letters.


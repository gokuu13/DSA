#include <iostream>
#include <assert.h>

#include <algorithm>

class Solution {
public:
    char findTheDifference(std::string s, std::string t) {
        std::sort(s.begin(), s.end());
        std::sort(t.begin(), t.end());
        for(int i(0); i < s.size(); i++)
        {
            if(s[i] != t[i])
            {
                return t[i];
            }
        }
        return t.back();
    }
};

int main()
{
    Solution sol;
    {
        assert(sol.findTheDifference("abcd", "abcde") == 'e');
        assert(sol.findTheDifference("", "y") == 'y');
    }
    return 0;
}
#include <iostream>
#include <assert.h>

#include <vector>
#include <unordered_map>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : 
        val(0), left(nullptr), right(nullptr) {}

    TreeNode(int x) : 
        val(x), left(nullptr), right(nullptr) {}

    TreeNode(int x, TreeNode *left, TreeNode *right) : 
        val(x), left(left), right(right) {}

};

class Solution {
    std::unordered_map<int, int> mp;
    int dfs(TreeNode *root, int &res)
    {
        if(!root)return 0;

        int left = dfs(root->left, res);
        int right = dfs(root->right, res);

        int sum = root->val + left + right;
        mp[sum]++;
        if(mp[sum] > res)
        {
            res = mp[sum];
        }
        return sum;
    }
public:
    std::vector<int> findFrequentTreeSum(TreeNode* root) 
    {
        int res = 0;
        dfs(root, res);
        std::vector<int> ans;
        for(auto it: mp)
        {
            if(it.second == res)
            {
                ans.push_back(it.first);
            }
        }
        return ans;
    }   
};

int main()
{
    return 0;
}
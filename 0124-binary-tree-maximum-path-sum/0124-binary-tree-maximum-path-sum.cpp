/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxPath(TreeNode* root, int &maxi){
        if(root == nullptr)
            return 0;
        int leftpathsum = max(0, maxPath(root -> left, maxi));
        int rightpathsum = max(0, maxPath(root -> right, maxi));
        maxi = max(maxi, leftpathsum + rightpathsum + root -> val);
        return root -> val + max(leftpathsum , rightpathsum);
    }
    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        maxPath(root, maxi);
        return maxi;
    }
};
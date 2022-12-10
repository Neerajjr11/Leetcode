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
private:
    long total_sum = 0;
    long max_pdt = 0;
public:
    int subtreesum(TreeNode* root){
        if(root == nullptr)
            return 0;
        int leftsubtree = subtreesum(root -> left);
        int rightsubtree = subtreesum(root -> right);
        int total_subtree_sum = leftsubtree + rightsubtree + root -> val;
        max_pdt = max(max_pdt, (total_subtree_sum) * (total_sum - total_subtree_sum));
        return total_subtree_sum;
    }
    int maxProduct(TreeNode* root) {
        total_sum = subtreesum(root);
        subtreesum(root);
        return (max_pdt % int(pow(10,9)+7));
    }
};
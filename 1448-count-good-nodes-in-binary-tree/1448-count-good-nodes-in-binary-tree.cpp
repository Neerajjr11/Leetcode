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
//     pre order traversal
    int search(TreeNode* curr,int max){
        if(!curr) return 0;
        int count = 0;
        if(curr->val >= max){
            count +=1;
                max = curr->val;
        }
        count +=search(curr->left,max);
        count += search(curr->right,max);
        return count;
        
    }
public:
    int goodNodes(TreeNode* root) {
        if(!root)
            return 0;
        if(!root->left && !root->right)
            return 1;
        int goodNodes=1;
        goodNodes += search(root->left,root->val);
        goodNodes += search(root->right,root->val);
        return goodNodes;
    }
};
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
     string result;
    
    void dfs(TreeNode* root) {
        result += "(";
        
        if(root != NULL) result += to_string(root -> val);
        if(root -> left) dfs(root -> left);
        else { if(root -> right) result += "()"; } 
        if(root -> right) dfs(root -> right);
        
        result += ")";
    }
public:
    string tree2str(TreeNode* root) {
       dfs(root);
       return result.substr(1, result.size() - 2); 
    }
    
};
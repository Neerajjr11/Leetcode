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
    void traverse(TreeNode* root, string path, vector<string>& res){
        if(root == NULL){
            return;
        }
        if(root->left == NULL and root->right==NULL){
            path +=to_string(root->val);
            res.push_back(path);
            path = "";
        }
        else
            path = path + to_string(root->val) + "->";
        traverse(root->left,path,res);
        traverse(root->right,path,res);
        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        traverse(root,"",res);
        return res;
    }
};
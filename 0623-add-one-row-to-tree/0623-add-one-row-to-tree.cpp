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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        queue<TreeNode*>q;
        int currDepth = 0;
        if(depth == 1){
            TreeNode* newNode = new TreeNode(val);
            newNode->left = root;
            return newNode;
        }
        q.push(root);
        while(!q.empty()){
            int sz = q.size();
            currDepth++;
            for(int i = 0; i < sz; i++){
                TreeNode* curr = q.front();
                q.pop();
                if(currDepth != depth - 1){
                    if(curr->left != nullptr)
                        q.push(curr->left);
                    if(curr->right != nullptr)
                        q.push(curr->right);
                }else{
                    
                        TreeNode* newNode1 = new TreeNode(val);
                        newNode1->left = curr->left;
                        curr->left = newNode1;
                        TreeNode* newNode2 = new TreeNode(val);
                        newNode2 -> right = curr -> right;
                        curr->right = newNode2;
                }
            }
        }
        return root;
    }
};
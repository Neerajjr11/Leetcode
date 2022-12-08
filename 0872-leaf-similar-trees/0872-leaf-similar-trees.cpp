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
    void traverse(TreeNode* root, vector<int> &nums){
        if(root){
            if(!root -> left && !root -> right)
                nums.push_back(root -> val);
            if(root -> left)
                traverse(root -> left, nums);
            if(root -> right)
                traverse(root -> right, nums);
        }
    }
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> nums1,nums2;
        traverse(root1, nums1);
        traverse(root2, nums2);
        return(nums1 == nums2);
    }
};
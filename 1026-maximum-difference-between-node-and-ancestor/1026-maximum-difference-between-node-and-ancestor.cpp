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
// to store the node, max value and the min value at every sequence
typedef tuple <TreeNode*, int, int> tup;
class Solution {
public:
    int maxAncestorDiff(TreeNode* root) {
        if(root == nullptr)
            return 0;
        stack<tup> stack;
        int max_val = root -> val, min_val = root -> val, max_diff = INT_MIN;
        stack.push(make_tuple(root,root -> val,root -> val));
        while(!stack.empty()){
            tuple curr_tuple = stack.top();
            stack.pop();
            auto node = get<0>(curr_tuple);
            int curr_max = get<1>(curr_tuple);
            int curr_min = get<2>(curr_tuple);
            if(node -> right)
                stack.push(make_tuple(node -> right, max(curr_max , node -> right -> val), min(curr_min , node -> right -> val)));
            if(node -> left)
                stack.push(make_tuple(node -> left, max(curr_max , node -> left -> val), min(curr_min , node -> left -> val)));
            if(node -> left == nullptr && node -> right == nullptr)
                if((curr_max - curr_min) >= max_diff)
                    max_diff = (curr_max - curr_min);
        }
        return max_diff;
    }
};
/*
// Definition for a QuadTree node.
class Node {
public:
    bool val;
    bool isLeaf;
    Node* topLeft;
    Node* topRight;
    Node* bottomLeft;
    Node* bottomRight;
    
    Node() {
        val = false;
        isLeaf = false;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node* _bottomLeft, Node* _bottomRight) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = _topLeft;
        topRight = _topRight;
        bottomLeft = _bottomLeft;
        bottomRight = _bottomRight;
    }
};
*/

class Solution {
public:
    Node* construct(vector<vector<int>>& grid) {
        function<Node* (int, int, int)> dfs = [&](int n, int r, int c){
            bool allSame = true;
            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++){
                    if(grid[r][c] != grid[r + i][c + j]){
                        allSame = false;
                        break;
                    }
                }
            }
            if(allSame)
                return new Node(grid[r][c], true);
            n /= 2;
            Node* node = new Node(true, false);
            node->topLeft = dfs(n, r, c);
            node->topRight = dfs(n, r, c + n);
            node->bottomLeft = dfs(n, r + n, c);
            node->bottomRight = dfs(n, r + n, c + n);
            return node;
        };
        return dfs(grid.size(), 0, 0);
    }
};
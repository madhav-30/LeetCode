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
    unordered_map<TreeNode*,int> umap;
    int height(TreeNode* root) {
        if(!root) return 0;
        if(umap.find(root)!=umap.end()) return umap[root];
        int h=1+max(height(root->left),height(root->right));
        umap[root]=h;
        return h;
    }

    bool isBalanced(TreeNode* root) {
        if(root==NULL)
            return true;
        int hl,hr;
        hl=height(root->left);
        hr=height(root->right);         
        return abs(hl-hr)<2 && isBalanced(root->right) && isBalanced(root->left);
    }
};
